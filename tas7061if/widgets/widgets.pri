INCLUDEPATH += $$PWD
DEPENDPATH += $$PWD
VPATH += $$PWD

SUBDIRS += wgContentRtm3004 wgContentFpl1003 wgContentSmb100B wgMainWindow 
include(wgContentRtm3004/wgContentRtm3004.pri)
include(wgContentFpl1003/wgContentFpl1003.pri)
include(wgContentSmb100B/wgContentSmb100B.pri)
include(wgMainWindow/wgMainWindow.pri)


SOURCES +=    

HEADERS +=    

FORMS +=
