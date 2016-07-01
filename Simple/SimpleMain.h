/***************************************************************
 * Name:      SimpleMain.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2016-06-23
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef SIMPLEMAIN_H
#define SIMPLEMAIN_H

#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

#include "SimpleApp.h"


#include <wx/button.h>
#include <wx/statline.h>
class SimpleDialog: public wxDialog
{
    public:
        SimpleDialog(wxDialog *dlg, const wxString& title);
        ~SimpleDialog();

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

#endif // SIMPLEMAIN_H
