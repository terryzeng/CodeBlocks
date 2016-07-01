/***************************************************************
 * Name:      SimpleAppApp.cpp
 * Purpose:   Code for Application Class
 * Author:     ()
 * Created:   2016-06-23
 * Copyright:  ()
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "SimpleAppApp.h"
#include "SimpleAppMain.h"

IMPLEMENT_APP(SimpleAppApp);

bool SimpleAppApp::OnInit()
{
    SimpleAppFrame* frame = new SimpleAppFrame(0L, _("wxWidgets Application Template"));
    
    frame->Show();
    
    return true;
}
