/***************************************************************
 * Name:      FirstWidgetsProjectApp.cpp
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

#include "FirstWidgetsProjectApp.h"
#include "FirstWidgetsProjectMain.h"

IMPLEMENT_APP(FirstWidgetsProjectApp);

bool FirstWidgetsProjectApp::OnInit()
{
    
    FirstWidgetsProjectDialog* dlg = new FirstWidgetsProjectDialog(0L, _("wxWidgets Application Template"));
    
    dlg->Show();
    return true;
}
