/***************************************************************
 * Name:      SimpleAppMain.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2016-06-23
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef SIMPLEAPPMAIN_H
#define SIMPLEAPPMAIN_H

#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

#include "SimpleAppApp.h"

class SimpleAppFrame: public wxFrame
{
    public:
        SimpleAppFrame(wxFrame *frame, const wxString& title);
        ~SimpleAppFrame();
    private:
        enum
        {
            idMenuQuit = 1000,
            idMenuAbout
        };
        void OnClose(wxCloseEvent& event);
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        DECLARE_EVENT_TABLE()
};


#endif // SIMPLEAPPMAIN_H
