/***************************************************************
 * Name:      FirstWidgetsProjectMain.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2016-06-23
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef FIRSTWIDGETSPROJECTMAIN_H
#define FIRSTWIDGETSPROJECTMAIN_H

#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

#include "FirstWidgetsProjectApp.h"


#include <wx/button.h>
#include <wx/statline.h>
class FirstWidgetsProjectDialog: public wxDialog
{
    public:
        FirstWidgetsProjectDialog(wxDialog *dlg, const wxString& title);
        ~FirstWidgetsProjectDialog();

    protected:
        enum
        {
            idBtnQuit = 1000,
            idBtnAbout
        };
        wxStaticText* m_staticText1;
        wxButton* BtnAbout;
        wxStaticLine* m_staticline1;
        wxButton* BtnQuit;

    private:
        void OnClose(wxCloseEvent& event);
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        DECLARE_EVENT_TABLE()
};

#endif // FIRSTWIDGETSPROJECTMAIN_H
