/*
 * Name:      ccMain.cpp
 * Purpose:   ColorCoder class plugin implementation for Code::Blocks
 *
 * Author:    Deschamps (deschamps@primi.net)
 * Copyright: Deschamps 2010-05-19
 * License:   GNU-GPL v3 or later
 */

#include <sdk.h> // Code::Blocks SDK
#include <configurationpanel.h>
#include <configmanager.h>

#include "ccGui.h"
#include "ccMain.h"
#include "ccSetup.h"

// Register the plugin with Code::Blocks.
// We are using an anonymous namespace so we don't litter the global one.
namespace
{
    PluginRegistrant<ColorCoder> reg(_T("ColorCoder"));
}

/*
 * ColorCoder :: ColorCoder (ctor)
 */

ColorCoder::ColorCoder()
{
    // Make sure our resources are available.
    // In the generated boilerplate code we have no resources but when
    // we add some, it will be nice that this code is in place already ;)
    if(!Manager::LoadResource(_T("ColorCoder.zip")))
    {
        NotifyMissingFile(_T("ColorCoder.zip"));
    }

    ccv = new ColorCoderValues();
}


/*
 * ColorCoder :: ~ColorCoder (dtor)
 */

ColorCoder::~ColorCoder()
{
}


/*
 * ColorCoder :: OnAttach
 */

void ColorCoder::OnAttach()
{
    // do whatever initialization you need for your plugin
    // NOTE: after this function, the inherited member variable
    // m_IsAttached will be TRUE...
    // You should check for it in other functions, because if it
    // is FALSE, it means that the application did *not* "load"
    // (see: does not need) this plugin...
}


/*
 * ColorCoder :: OnRelease
 */

void ColorCoder::OnRelease( bool appShutDown )
{
    // do de-initialization for your plugin
    // if appShutDown is true, the plugin is unloaded because Code::Blocks is being shut down,
    // which means you must not use any of the SDK Managers
    // NOTE: after this function, the inherited member variable
    // m_IsAttached will be FALSE...
}


/*
 * ColorCoder :: Configure
 */

int ColorCoder::Configure()
{
    //create and display the configuration dialog for your plugin
    cbConfigurationDialog dlg(Manager::Get()->GetAppWindow(), wxID_ANY, _("ColorCoder defaults"));
    cbConfigurationPanel* panel = GetConfigurationPanel(&dlg);
    if (panel)
    {
        dlg.AttachConfigurationPanel(panel);
        PlaceWindow(&dlg);
        return dlg.ShowModal() == wxID_OK ? 0 : -1;
    }
    return -1;
}


/*
 * ColorCoder :: GetConfigurationPanel
 */

cbConfigurationPanel* ColorCoder::GetConfigurationPanel( wxWindow* parent )
{
	ColorCoderSetup*  ccSetupPanel = new ColorCoderSetup( parent );
	return ccSetupPanel;
}


/*
 * ColorCoder :: Execute
 */

int ColorCoder::Execute()
{
	bool CanShowDialog = true;
	ccv->read_config();

	if ( ccv->layoutTiny )
	{
		ColorCoderDialogTiny* ccMainTiny;
		ccMainTiny = new ColorCoderDialogTiny( ccv, Manager::Get()->GetAppWindow() );
		if ( !ccMainTiny->Show() ) CanShowDialog = false;
	}
	else
	{
		ColorCoderDialog* ccMainExt;
		ccMainExt = new ColorCoderDialog( ccv, Manager::Get()->GetAppWindow() );
		if ( !ccMainExt->Show() ) CanShowDialog = false;
	}

	if ( !CanShowDialog )
	{
		wxMessageBox(
			_("ColorCoder interface can't be shown"),
			_("Unkown error"),
			wxOK|wxICON_ERROR,
			Manager::Get()->GetAppWindow() );
		return -1;
	}

	return 0;
}

/*
 * End of file  (ccMain.cpp)
 */
