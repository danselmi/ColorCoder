SUBDIRS = 

INCLUDES = $(WX_CXXFLAGS) \
		-I$(top_srcdir)/src/include \
		-I$(top_srcdir)/src/sdk/wxscintilla/include

pluginlibdir = $(pkglibdir)/plugins

pluginlib_LTLIBRARIES = libColorCoder.la

libColorCoder_la_LDFLAGS = -module -version-info 0:1:0 -shared -no-undefined -avoid-version

libColorCoder_la_LIBADD = $(PLUGIN_WX_LIBS) \
			../../../sdk/libcodeblocks.la

libColorCoder_la_SOURCES = cc__wxFB.cpp \
				ccCommons.cpp \
				ccGui.cpp \
				ccMain.cpp \
				ccSetup.cpp

noinst_HEADERS = cc__wxFB.h \
		ccCommons.h \
		ccGui.h \
		ccMain.h \
		ccSetup.h \
		HTMLcolors.h \
		wx_pch.h

EXTRA_DIST = 	$(srcdir)/*.cbp \
		manifest.xml \
		update \
		update.bat

pkgdata_DATA = ColorCoder.zip

CLEANFILES = $(pkgdata_DATA)

ColorCoder.zip: manifest.xml
	PWD=`pwd` cd $(srcdir) && zip -R $(PWD)/ColorCoder.zip manifest.xml > /dev/null


