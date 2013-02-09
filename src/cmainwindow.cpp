/***************************************************************************
 *   Copyright (C) 2007 by Samith D Sandanayake   *
 *   samithdisal@gmail.com   *
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
#include "cmainwindow.h"

CMainWindow::CMainWindow(QWidget *parent, const char *name)
 : QMainWindow(parent, name)
{
	setCaption( "Shutdown Timer - Samith D Sandanayake" );
	resize( 440, 240 );
	
	grdLayout = new QGridLayout( this , 7, 8, 2, 3 );
	//Time Set
	lbl_Hrs = new QLabel( "Hours : " , this );
	com_Hrs = new QComboBox( this );
	com_Hrs->insertItem( "0", 0 );
	com_Hrs->insertItem( "1", 1 );
	com_Hrs->insertItem( "2", 2 );
	com_Hrs->insertItem( "3", 3 );
	com_Hrs->insertItem( "4", 4 );
	com_Hrs->insertItem( "5", 5 );
	
	lbl_Mins = new QLabel( "Minutes : ", this );
	com_Mins = new QComboBox( this );
	com_Mins->insertItem( "0",0 );
	com_Mins->insertItem( "1",1 );
	com_Mins->insertItem( "2",2 );
	com_Mins->insertItem( "3",3 );
	com_Mins->insertItem( "4",4 );
	com_Mins->insertItem( "5",5 );
	com_Mins->insertItem( "6",6 );
	com_Mins->insertItem( "7",7 );
	com_Mins->insertItem( "8",8 );
	com_Mins->insertItem( "9",9 );
	com_Mins->insertItem( "10",10 );
	com_Mins->insertItem( "11",11 );
	com_Mins->insertItem( "12",12 );
	com_Mins->insertItem( "13",13 );
	com_Mins->insertItem( "14",14 );
	com_Mins->insertItem( "15",15 );
	com_Mins->insertItem( "16",16 );
	com_Mins->insertItem( "17",17 );
	com_Mins->insertItem( "18",18 );
	com_Mins->insertItem( "19",19 );
	com_Mins->insertItem( "20",20 );
	com_Mins->insertItem( "21",21 );
	com_Mins->insertItem( "22",22 );
	com_Mins->insertItem( "23",23 );
	com_Mins->insertItem( "24",24 );
	com_Mins->insertItem( "25",25 );
	com_Mins->insertItem( "26",26 );
	com_Mins->insertItem( "27",27 );
	com_Mins->insertItem( "28",28 );
	com_Mins->insertItem( "29",29 );
	com_Mins->insertItem( "30",30 );
	com_Mins->insertItem( "31",31 );
	com_Mins->insertItem( "32",32 );
	com_Mins->insertItem( "33",33 );
	com_Mins->insertItem( "34",34 );
	com_Mins->insertItem( "35",35 );
	com_Mins->insertItem( "36",36 );
	com_Mins->insertItem( "37",37 );
	com_Mins->insertItem( "38",38 );
	com_Mins->insertItem( "39",39 );
	com_Mins->insertItem( "40",40 );
	com_Mins->insertItem( "41",41 );
	com_Mins->insertItem( "42",42 );
	com_Mins->insertItem( "43",43 );
	com_Mins->insertItem( "44",44 );
	com_Mins->insertItem( "45",45 );
	com_Mins->insertItem( "46",46 );
	com_Mins->insertItem( "47",47 );
	com_Mins->insertItem( "48",48 );
	com_Mins->insertItem( "49",49 );
	com_Mins->insertItem( "50",50 );
	com_Mins->insertItem( "51",51 );
	com_Mins->insertItem( "52",52 );
	com_Mins->insertItem( "53",53 );
	com_Mins->insertItem( "54",54 );
	com_Mins->insertItem( "55",55 );
	com_Mins->insertItem( "56",56 );
	com_Mins->insertItem( "57",57 );
	com_Mins->insertItem( "58",58 );
	com_Mins->insertItem( "59",59 );
	
	lbl_Secs = new QLabel( "Seconds : ", this );
	com_Secs = new QComboBox( this );
	com_Secs->insertItem( "0",0 );
	com_Secs->insertItem( "1",1 );
	com_Secs->insertItem( "2",2 );
	com_Secs->insertItem( "3",3 );
	com_Secs->insertItem( "4",4 );
	com_Secs->insertItem( "5",5 );
	com_Secs->insertItem( "6",6 );
	com_Secs->insertItem( "7",7 );
	com_Secs->insertItem( "8",8 );
	com_Secs->insertItem( "9",9 );
	com_Secs->insertItem( "10",10 );
	com_Secs->insertItem( "11",11 );
	com_Secs->insertItem( "12",12 );
	com_Secs->insertItem( "13",13 );
	com_Secs->insertItem( "14",14 );
	com_Secs->insertItem( "15",15 );
	com_Secs->insertItem( "16",16 );
	com_Secs->insertItem( "17",17 );
	com_Secs->insertItem( "18",18 );
	com_Secs->insertItem( "19",19 );
	com_Secs->insertItem( "20",20 );
	com_Secs->insertItem( "21",21 );
	com_Secs->insertItem( "22",22 );
	com_Secs->insertItem( "23",23 );
	com_Secs->insertItem( "24",24 );
	com_Secs->insertItem( "25",25 );
	com_Secs->insertItem( "26",26 );
	com_Secs->insertItem( "27",27 );
	com_Secs->insertItem( "28",28 );
	com_Secs->insertItem( "29",29 );
	com_Secs->insertItem( "30",30 );
	com_Secs->insertItem( "31",31 );
	com_Secs->insertItem( "32",32 );
	com_Secs->insertItem( "33",33 );
	com_Secs->insertItem( "34",34 );
	com_Secs->insertItem( "35",35 );
	com_Secs->insertItem( "36",36 );
	com_Secs->insertItem( "37",37 );
	com_Secs->insertItem( "38",38 );
	com_Secs->insertItem( "39",39 );
	com_Secs->insertItem( "40",40 );
	com_Secs->insertItem( "41",41 );
	com_Secs->insertItem( "42",42 );
	com_Secs->insertItem( "43",43 );
	com_Secs->insertItem( "44",44 );
	com_Secs->insertItem( "45",45 );
	com_Secs->insertItem( "46",46 );
	com_Secs->insertItem( "47",47 );
	com_Secs->insertItem( "48",48 );
	com_Secs->insertItem( "49",49 );
	com_Secs->insertItem( "50",50 );
	com_Secs->insertItem( "51",51 );
	com_Secs->insertItem( "52",52 );
	com_Secs->insertItem( "53",53 );
	com_Secs->insertItem( "54",54 );
	com_Secs->insertItem( "55",55 );
	com_Secs->insertItem( "56",56 );
	com_Secs->insertItem( "57",57 );
	com_Secs->insertItem( "58",58 );
	com_Secs->insertItem( "59",59 );
	
	grdLayout->addWidget( lbl_Hrs, 1, 1 );
	grdLayout->addWidget( com_Hrs, 1, 2 );
	grdLayout->addWidget( lbl_Mins, 1, 3 );
	grdLayout->addWidget( com_Mins, 1, 4 );
	grdLayout->addWidget( lbl_Secs, 1, 5 );
	grdLayout->addWidget( com_Secs, 1, 6 );
	
	//Buttons
	btn_Start = new QPushButton( "Start", this );
	connect( btn_Start, SIGNAL( clicked() ), this, SLOT( slotStart() ) );
	
	btn_Cancel = new QPushButton( "Cancel", this );
	connect(btn_Cancel, SIGNAL( clicked() ), this, SLOT( slotCancel() ) );
	btn_Cancel->setEnabled( FALSE );
	
	grdLayout->addWidget( btn_Start, 2, 2 );
	grdLayout->addWidget( btn_Cancel, 2, 3 );
	
	tmr_Timer = new QTimer( this );
	connect( tmr_Timer, SIGNAL( timeout() ), this, SLOT( slotDone() ) );
	
	tmr_Count = new QTimer( this );
	connect( tmr_Count, SIGNAL( timeout() ), this, SLOT( slotCount() ) );
	
	
	statusBar()->message( "Ready" );
	grdLayout->addMultiCellWidget( statusBar(), 7, 7, 0, 8 );
	
	lbl_Remain = new QLabel( "0 : 00 : 00", this );
	lbl_Remain->setFont( QFont::QFont( "Cronyx-Helvetica", 28, 50 ) );
	grdLayout->addMultiCellWidget( lbl_Remain, 4,5,3,6 );
	
	//init Actions
	aTimer_Start = new QAction( "&Start", CTRL+Key_S, this );
	aTimer_Cancel = new QAction( "&Cancel", CTRL+Key_X, this );
	aHelp_Help = new QAction( "&Help", Key_F1, this );
	aHelp_Online = new QAction( "&Online", 0, this );
	aHelp_About = new QAction( "&About", 0, this );
	
	connect( aTimer_Start, SIGNAL( activated() ), this, SLOT( slotTimer_Start() ) );
	connect( aTimer_Cancel, SIGNAL( activated() ), this, SLOT( slotTimer_Cancel() ) );
	connect( aHelp_Help, SIGNAL( activated() ), this, SLOT( slotHelp_Help() ) );
	connect( aHelp_Online, SIGNAL( activated() ), this, SLOT( slotHelp_Online() ) );
	connect( aHelp_About, SIGNAL( activated() ), this, SLOT( slotHelp_About() ) );
	
	//init MenuBar
	grdLayout->addMultiCellWidget( menuBar(), 0,0,0,8);
	
	mnu_Timer = new QPopupMenu( this );
	aTimer_Start -> addTo( mnu_Timer );
	aTimer_Cancel -> addTo( mnu_Timer );
	menuBar()->insertItem( "&Timer", mnu_Timer );
	aTimer_Cancel -> setEnabled( FALSE );
	
	mnu_Help = new QPopupMenu( this );
	aHelp_Help->addTo( mnu_Help );
	aHelp_Online->addTo( mnu_Help );
	aHelp_About->addTo( mnu_Help );
	menuBar()->insertItem( "&Help", mnu_Help );
	
	//About Dialog
	dlgAbout = new CAboutDlg( this );
	
	//Remain Time
	tim_blank = new QTime(0,0,0,0);

}


CMainWindow::~CMainWindow()
{
}

/*
 QPopupMenu *mnu_Timer, *mnu_Help;
    QAction *aTimer_Start, aTimer_Cancel, aHelp_Help, aHelp_Online, aHelp_About;
    */



void CMainWindow::slotStart()
{
	statusBar()->message( "Will Be Shutdown..." );
	l_tim = (long) com_Hrs->currentItem()*3600000+com_Mins->currentItem()*60000+com_Secs->currentItem()*1000;
	int_count = (int)l_tim;
	com_Hrs->setEnabled( FALSE );
	com_Mins->setEnabled( FALSE );
	com_Secs->setEnabled( FALSE );
	btn_Start->setEnabled( FALSE );
	btn_Cancel->setEnabled( TRUE );
	aTimer_Start->setEnabled( FALSE );
	aTimer_Cancel->setEnabled( TRUE );
	tmr_Timer->start( (int) l_tim );
	tmr_Count->start(100);
	
}

void CMainWindow::slotCancel()
{
	tmr_Timer->stop();
	tmr_Count->stop();
	lbl_Remain->setText("0 : 00 : 00");
	com_Hrs->setEnabled( TRUE );
	com_Mins->setEnabled( TRUE );
	com_Secs->setEnabled( TRUE );
	btn_Start->setEnabled( TRUE );
	btn_Cancel->setEnabled( FALSE );
	aTimer_Start->setEnabled( TRUE );
	aTimer_Cancel->setEnabled( FALSE );
	statusBar()->message( "Ready" );
}


void CMainWindow::slotDone()
{
	statusBar()->message( "Shutting down.." );
	QProcess *pross = new QProcess( this );
	pross->addArgument( "halt" );
	pross->start();
	
}



void CMainWindow::slotCount()
{
	int_count-=100;
	tim_Remain = tim_blank->addMSecs(int_count);
	lbl_Remain->setText(tim_Remain.toString("h : mm : ss"));
}




void CMainWindow::slotHelp_About()
{
	dlgAbout->exec();
}



void CMainWindow::slotHelp_Help()
{
	QProcess *hlpProssx = new QProcess( this );
	hlpProssx->addArgument( "firefox" );
	hlpProssx->addArgument( "/usr/share/doc/ssdcompany/shtimer/html/index.html" );
	hlpProssx->start();

}



void CMainWindow::slotHelp_Online()
{
	QProcess *hlpPross = new QProcess( this );
	hlpPross->addArgument( "firefox" );
	hlpPross->addArgument( "http://shtimer.blogspot.com" );
	hlpPross->start();
}



void CMainWindow::slotTimer_Start()
{
	slotStart();
}



void CMainWindow::slotTimer_Cancel()
{
	slotCancel();
}
