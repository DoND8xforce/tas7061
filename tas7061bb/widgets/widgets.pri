INCLUDEPATH += $$PWD
DEPENDPATH += $$PWD
VPATH += $$PWD

SUBDIRS += wgContentRtm3004 wgContentFpl1003 wgContentHmf2550 wgMainWindow
include(wgContentRtm3004/wgContentRtm3004.pri)
include(wgContentFpl1003/wgContentFpl1003.pri)
include(wgContentHmf2550/wgContentHmf2550.pri)
include(wgMainWindow/wgMainWindow.pri)

SOURCES +=    

HEADERS +=    

FORMS +=
