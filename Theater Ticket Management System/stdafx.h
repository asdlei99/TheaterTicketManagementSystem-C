// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>
#include <Windows.h>
#include <stdlib.h>
#include <conio.h>
#include "TTMS_GotoXY.h"
#include "BIOS_GOTO_BOX.h"
#include "GET_KEY.h"
#include "GET_OC.h"
#include "GET_XY.h"
#include "INPUT_ACCOUT.h"
#include "INPUT_PASSWORD.h"
#include "TTMS_INITIAL.h"
#include "TTMS_SCU_Login.h"
#include "TTMS_SCU_Account_Srv_Infor.h"
#include "TTMS_SCU_Account_Perst_CheckAccout.h"
#include "TTMS_SCU_Account_Srv_InitSys.h"
#include "TTMS_SCU_Account_UI_InitSys.h"
#include "CREAT_LIST_HEAD_USER.h"
#include "TTMS_SCU_Account_Srv_Add.h"
#include "TTMS_SCU_Account_Prest_Insert.h"
#include "TTMS_SCU_Account_Perst_CheckAccFile.h"
#include "TTMS_SCU_Account_Srv_FetchAll.h"
#include "TTMS_SCU_Account_Srv_Vertify.h"
#include "TTMS_SCU_Account_Perst_FetchByAcc.h"
#include "TTMS_SCU_Main_UI_MgtEnt.h"
#include "TTMS_SCU_Account_UI_Add.h"
#include "TTMS_SCU_Account_UI_Browe.h"
#include "TTMS_SCU_Account_Srv_Back.h"
#include "TTMS_SCU_Account_UI_BoByPage.h"
#include "TTMS_SCU_Account_UI_DelByN.h"
#include "TTMS_SCU_Account_Srv_DelByID.h"
#include "TTMS_SCU_Account_perst_Update.h"
#include "TTMS_SCU_Account_UI_MgtEnt.h"
#include "TTMS_SCU_Studio_UI_MgtEnt.h"
#include "TTMS_SCU_Studio_Srv_Infor.h"
#include "TTMS_SCU_Studio_UI_Add.h"
#include "TTMS_SCU_EntKey_Perst_CompNewKeys.h"
#include "TTMS_SCU_EntKey_Srv_CompNewKey.h"
#include "TTMS_SCU_Studio_Perst_Insert.h"
#include "TTMS_SCU_Studio_Srv_Add.h"
#include "TTMS_SCU_Studio_UI_DelByID.h"
#include "TTMS_SCU_Studio_Perst_FetchByID.h"
#include "TTMS_SCU_Studio_Perst_DelByID.h"
#include "TTMS_SCU_Studio_Perst_CompKeyP.h"
#include "TTMS_SCU_Studio_Perst_CompKeyM.h"
#include "TTMS_SCU_Account_Perst_FetchByName.h"
#include "TTMS_SCU_Account_UI_ModP.h"
#include "TTMS_SCU_Account_Srv_ModP.h"
#include "TTMS_SCU_Account_Perst_ModP.h"
#include "TTMS_SCU_Account_UI_QUE.h"
#include "TTMS_SCU_Account_Perst_DelByName.h"
#include "TTMS_SCU_Studio_UI_Browe.h"
#include "TTMS_SCU_Studio_UI_LookByP.h"
#include "TTMS_SCU_Studio_Srv_FetchById.h"
#include "TTMS_SCU_Studio_UI_Mod.h"
#include "TTMS_SCU_Studio_Srv_Mod.h"
#include "TTMS_SCU_Studio_Perst_Mod.h"
#include "TTMS_SCU_Seat_UI_MgEnt.h"
#include "TTMS_SCU_Seat_Srv_Info.h"
#include "TTMS_SCU_Seat_UI_Add.h"
#include "TTMS_SCU_Seat_Srv_FetchByID.h"
#include "TTMS_SCU_Seat_Perst_FetchByID.h"
#include "TTMS_SCU_EntKeySeat_Perst_ComNewKey.h"
#include "TTMS_SCU_EntKeySeat_Perst_CompKeyM.h"
#include "TTMS_SCU_EntKeySeat_Perst_CompP.h"
#include "TTMS_SCU_Seat_Srv_Check.h"
#include "TTMS_SCU_Seat_Perst_Insert.h"
#include "TTMS_SCU_Seat_Srv_Add.h"
#include "TTMS_SCU_Seat_UI_Del.h"
#include "TTMS_SCU_Seat_Perst_Del.h"
#include "TTMS_SCU_Seat_Srv_Mod.h"
#include "TTMS_SCU_Seat_UI_Mod.h"
#include "TTMS_SCU_Seat_Perst_Mod.h"
#include "TTMS_SCU_Play_UI_MgtEnt.h"
#include "TTMS_SCU_Play_UI_Add.h"
#include "TTMS_SCU_Play_Srv_Info.h"
#include "TTMS_SCU_EntKeyPlay_Perst_CompNewKeys.h"
#include "TTMS_SCU_EntKeyPlay_Perst_CompKeyP.h"
#include "TTMS_SCU_EntKeyPlay_Perst_CompKeyM.h"
#include "TTMS_SCU_Play_Perst_FetchByID.h"
#include "TTMS_SCU_Play_Srv_Check.h"
#include "TTMS_SCU_Play_Perst_Insert.h"
#include "TTMS_SCU_Play_Srv_Add.h"
#include "TTMS_SCU_Play_Perst_FetchByID.h"
#include "TTMS_SCU_Play_UI_Browe.h"
#include "TTMS_SCU_Play_UI_LookByP.h"
#include "TTMS_SCU_Play_Perst_Del.h"
#include "TTMS_SCU_Play_UI_Del.h"
#include "TTMS_SCU_Play_Srv_FetchById.h"
#include "TTMS_SCU_Play_UI_Mod.h"
#include "TTMS_SCU_Play_Srv_Mod.h"
#include "TTMS_SCU_Play_Perst_Mod.h"
#include "TTMS_SCU_Schedule_Srv_Info.h"
#include "TTMS_SCU_Schedule_UI_MgtEnt.h"
#include "TTMS_SCU_EntKeySche_Perst_CompKeyM.h"
#include "TTMS_SCU_EntKeySche_Perst_CompKeyP.h"
#include "TTMS_SCU_EntKeySche_Perst_CompNewKeys.h"
#include "TTMS_SCU_Sche_Perst_FetchByID.h"
#include "TTMS_SCU_Sche_Srv_FetchByID.h"
#include "TTMS_SCU_Schedule_Srv_Check.h"
#include "TTMS_SCU_Schedule_Perst_Insert.h"
#include "TTMS_SCU_Schedule_Srv_Add.h"
#include "TTMS_SCU_Schedule_UI_Add.h"
#include "TTMS_SCU_Schedule_Srv_Del.h"
#include "TTMS_SCU_Schedule_Perst_Del.h"
#include "TTMS_SCU_Schedule_UI_Del.h"
#include "TTMS_SCU_Schedule_UI_Browe.h"
#include "TTMS_SCU_Schedule_UI_LookByP.h"
#include "TTMS_SCU_Schedule_Perst_Mod.h"
#include "TTMS_SCU_Schedule_Srv_Mod.h"
#include "TTMS_SCU_Schedule_UI_Mod.h"
#include "TTMS_SCU_Sale_UI_ShowTicket.h"
#include "TTMS_SCU_Sale_UI_ShowSchedule.h"
#include "TTMS_SCU_EntKey_Sale_CompNewKeys.h"
#include "TTMS_SCU_EntKeySale_Perst_CompKeyM.h"
#include "TTMS_SCU_Ticket_Srv_Info.h"
#include "TTMS_SCU_Sale_UI_MgtEnt.h"
#include "TTMS_SCU_Sale_Srv_Info.h"
#include "TTMS_SCU_EntKey_Ticket_CompNewKeys.h"
#include "TTMS_SCU_EntKeyTicket_Perst_CompKeyM.h"
#include "TTMS_SCU_Ticket_Srv_StatusC.h"
#include "TTMS_SCU_EntKeySale_Perst_CompKeyP.h"
#include "TTMS_SCU_EntKeyTicket_Perst_CompKeyP.h"
#include "TTMS_SCU_Ticket_Srv_Add.h"
#include "TTMS_SCU_Ticket_Perst_Insert.h"
#include "TTMS_SCU_Ticket_Srv_StatusC.h"
#include "TTMS_SCU_Seat_Srv_StatusC.h"
#include "TTMS_SCU_Ticket_Perst_FetchByRC.h"
#include "TTMS_SCU_Seat_Perst_FetchByRC.h"
#include "TTMS_SCU_Ticket_Perst_FetchByID.h"
#include "TTMS_SCU_Ticket_ShowByT.h"
#include "TTMS_SCU_Sale_Srv_Sale.h"
#include "TTMS_SCU_Sale_Perst_Insert.h"
#include "TTMS_SCU_Ticket_Perst_Mod.h"
#include "TTMS_SCU_Sale_Srv_Return.h"
#include "TTMS_SCU_SaleData_UI_Analysis.h"
#include "TTMS_SCU_SaleData_Perst_FetchByID.h"
#include "TTMS_SCU_SaleData_Srv_FetchByID.h"
#include "TTMS_SCU_SaleData_UI_Browe.h"
#include "TTMS_SCU_SaleData_UI_LookByP.h"
#include "TTMS_SCU_SaleM_UI_Money.h"
#include "TTMS_SCU_Perst_DelAllSeatByStudioUp.h"
#include "TTMS_SCU_Srv_DelAllSeatByStudioUp.h"
#include "TTMS_SCU_Perst_DelAllTicketBySchedule.h"
// TODO:  在此处引用程序需要的其他头文件
