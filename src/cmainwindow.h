/***************************************************************************
 *   Copyright (C) 2007 - 2013 by Samith D Sandanayake                     *
 *   samithdisal@gmail.com                                                 *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
#ifndef CMAINWINDOW_H
#define CMAINWINDOW_H

#include <QtGui/QtGui>
#include <QtCore/QTimer>
#include <QtCore/QDateTime>
#include <QtCore/QProcess>


#include "caboutdlg.h"


/**
	@author Samith D Sandanayake <samithdisal@gmail.com>
*/
class CMainWindow : public QMainWindow
{
Q_OBJECT
public:
    CMainWindow(QWidget *parent = 0, const char *name = 0);

    ~CMainWindow();

private:
    QGridLayout *grdLayout;
    QTimer *tmr_Timer;
    QTimer *tmr_Count;
	QTime tim_Remain, *tim_blank;
    QComboBox *com_Hrs, *com_Mins, *com_Secs;
    QPushButton *btn_Start, *btn_Cancel;
    QLabel *lbl_Hrs, *lbl_Mins, *lbl_Secs, *lbl_Remain;
    QMenu *mnu_Timer, *mnu_Help;
    QAction *aTimer_Start, *aTimer_Cancel, *aHelp_Help, *aHelp_Online, *aHelp_About;
    
    long l_tim; //the time for shutdown
    int int_count; //the curent count
    
    CAboutDlg *dlgAbout; //About Dialog
private slots:
    void slotStart();
    void slotCancel();
    void slotDone();
    void slotCount();
    void slotHelp_About();
    void slotHelp_Help();
    void slotHelp_Online();
    void slotTimer_Start();
    void slotTimer_Cancel();
};

#endif
