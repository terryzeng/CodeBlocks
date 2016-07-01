/***************************************************************
 * Name:      SimpleApp.cpp
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

#include "SimpleApp.h"
#include "SimpleMain.h"

IMPLEMENT_APP(SimpleApp);

bool SimpleApp::OnInit()
{
    
    SimpleDialog* dlg = new SimpleDialog(0L, _("wxWidgets Application Template"));
    
    dlg->Show();
    return true;
}
