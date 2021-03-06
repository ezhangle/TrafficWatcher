// TrafficWatcher - a network speed monitor

// Copyright (C) 2008, 2012 - Stefan Kueng

// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software Foundation,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
//

#pragma once

#ifndef __AFXWIN_H__
    #error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols
#include "Globals.h"
#include "winproc.h"
#include <commctrl.h>

/**
 * CTrafficwatchApp.
 * the main class of the application. generated by the MSVC wizard.
 */
class CTrafficwatchApp : public CWinApp
{
public:
    CTrafficwatchApp();
    ~CTrafficwatchApp();
    CWinproc m_wnd;
    HANDLE   m_mutex;


public:
    virtual BOOL InitInstance();
    DECLARE_MESSAGE_MAP()
};

extern CTrafficwatchApp* m_pTheApp;
