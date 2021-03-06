<?php
#================================================================================================================
# Author 		: Baskaran
# Date	                : 2008-07-09
# Project		: MatrimonyProduct
# Filename		: dbinfo.inc
#================================================================================================================
# Description   : MySQL Database and Table name variables
#================================================================================================================

// VARIABLE DECLARATION
$varDbInfo	= array();
$varTable	= array();

// DB AUTH INFO
$varDbInfo['USERNAME']			= 'matriservices';
$varDbInfo['PASSWORD']			= "services";
$varDbInfo['DATABASE']			= "communitymatrimony";
$varInactiveDbInfo['DATABASE']		= "cbsinactive";

$varOfflineCbsDbInfo['DATABASE']	= "communityofflinepayment";
$varOfflineCbsDbInfo['USERNAME']	= "matriservices";
$varOfflineCbsDbInfo['PASSWORD']	= "services";
$varCbstminterfaceDbInfo['DATABASE']	= "cbstminterface";
$varCbsRminterfaceDbInfo['DATABASE']	= "cbsrminterface";
$varOnlineSwayamvaramDbInfo['DATABASE']	= "cbsonlineswayamvaram";
$varOnlineSwayamvaramOpenfireDbInfo['DATABASE']	= "openfire";

$varMatchwatchDbInfo['DATABASE']	= "cbsmatchwatch";
$varMatchwatchDbInfo['USERNAME']	= "matriservices";
$varMatchwatchDbInfo['PASSWORD']	= "services";


// 48 TABLES NAME VARIABLES
$varTable['ACTIVITYRATIO']		= 'activityratio';
$varTable['ADDREFERENCE']		= 'addreference';
$varTable['ADMINLOGININFO']		= 'adminlogininfo';
$varTable['BLOCKINFO']			= 'blockinfo';
$varTable['BOOKMARKINFO']		= 'bookmarkinfo';
$varTable['COMMUNICATIONRECEIVED']	= 'communicationreceived';
$varTable['COMMUNICATIONSENT']		= 'communicationsent';
$varTable['IGNOREINFO']			= 'ignoreinfo';
$varTable['INTERESTPENDINGINFO']	= 'interestpendinginfo';
$varTable['INTERESTRECEIVEDINFO']	= 'interestreceivedinfo';
$varTable['INTERESTSENTINFO']		= 'interestsentinfo';
$varTable['INTERESTSENTTRACKINFO']	= 'interestsenttrackinfo';
$varTable['MAILDRAFTINFO']		= 'maildraftinfo';
$varTable['MAILFOLDERINFO']		= 'mailfolderinfo';
$varTable['MAILMANAGERINFO']		= 'mailmanagerinfo';
$varTable['MAILPENDINGINFO']		= 'mailpendinginfo';
$varTable['MAILRECEIVEDINFO']		= 'mailreceivedinfo';
$varTable['MAILSENTINFO']		= 'mailsentinfo';
$varTable['MAILSENTTRACKINFO']		= 'mailsenttrackinfo';
$varTable['MATRIIDINFO']		= 'matriidinfo';
$varTable['MEMBERACTIONINFO']		= 'memberactioninfo';
$varTable['MEMBERDELETEDINFO']		= 'memberdeletedinfo';
$varTable['MEMBERFAMILYINFO']		= 'memberfamilyinfo';
$varTable['MEMBERFILTERINFO']		= 'memberfilterinfo';
$varTable['MEMBERHOBBIESINFO']      = 'memberhobbiesinfo';
$varTable['MEMBERINFO']			= 'memberinfo';
$varTable['MEMBERLOGININFO']		= 'memberlogininfo';
$varTable['MEMBERLOGINLOG']			= 'memberloginlog';
$varTable['MEMBEROFFERINFO']		= 'memberofferinfo';
$varTable['MEMBERPARTLYCASEONEINFO']= 'memberpartlycaseoneinfo';
$varTable['MEMBERPARTLYINFO']		= 'memberpartlyinfo';
$varTable['MEMBERPARTNERINFO']		= 'memberpartnerinfo';
$varTable['MEMBERPHOTOINFO']		= 'memberphotoinfo';
$varTable['MEMBERPROFILEVIEWEDINFO']= 'memberprofileviewedinfo';
$varTable['MEMBERSTATISTICS']		= 'memberstatistics';
$varTable['MEMBERTRACKINGINFO']		= 'membertrackinginfo';
$varTable['MEMBERUPDATEDINFO']		= 'memberupdatedinfo';
$varTable['MEMBERVIEWEDLOGINFO']	= 'memberviewedloginfo';
$varTable['PAYMENTHISTORYINFO']		= 'paymenthistoryinfo';
$varTable['PAYMENTTRACKING']		= 'paymenttracking';
$varTable['PROFILEMATCHINFO']		= 'profilematchinfo';
$varTable['PROFILEMATCHINFO_NEW']	= 'profilematchinfo_new';
$varTable['REFEREEDETAILS']			= 'refereedetails';
$varTable['REFERENCESETTING']		= 'referencesetting';
$varTable['REQUESTINFOSENT']		= 'requestinfosent';
$varTable['SEARCHSAVEDINFO']		= 'searchsavedinfo';
$varTable['SPAMMSG']				= 'spammsg';
$varTable['SUCCESSSTORYINFO']		= 'successstoryinfo';
$varTable['REQUESTINFORECEIVED']	= 'requestinforeceived';
$varTable['VOICEMATRIMONYPINNOSERIES'] = 'voicematrimonypinnoseries';
$varTable['VOICEPROFILE']			= 'voiceprofile';
$varTable['PHONEPACKAGEDET']		= 'phonepackagedet';
$varTable['PHONEVIEWLIST']			= 'phoneviewlist';
$varTable['PHOTOINFOLOG']			= 'photoinfolog';
$varTable['CITIAUTH']				= 'citiauth';
$varTable['CITITRACE']				= 'cititrace';
$varTable['PURGEIMG']				= 'purgeimg';
$varTable['PREPAYMENTTRACKINFO']	= 'prepaymenttrackinfo';
$varTable['PREPAYMENTHISTORYINFO']	= 'prepaymenthistoryinfo';
$varTable['MAXMINDPAYMENTCAPTURE']	= 'maxmindpaymentcapture';
$varTable['PAYMENTAUTHORIZATION']	= 'paymentauthorization';
$varTable['ASSUREDCLICKTOCALLLOG']	= 'assuredclicktocalllog';
$varTable['ASSUREDCONTACTBEFOREVALIDATION']	= 'assuredcontactbeforevalidation';
$varTable['ASSUREDCONTACT']	= 'assuredcontact';
$varTable['ASSUREDCONTACTPINNOSERIES']	= 'assuredcontactpinnoseries';
$varTable['MATCHWATCHSENTDETAILS']	= 'matchwatchsentdetails';
$varTable['PHONEVERIFIED_DETAILS']	= 'phoneverified_details';
$varTable['DELETIONPROFILELOG']	= 'deletionprofilelog';
$varTable['NEWPROFILEMATCHINFO']	= 'newprofilematchinfo';
//thava added for auto call ivr
$varTable['ASSUREDCLICKTOCALLLOG']	= 'assuredclicktocalllog';
//Srini added for tax calculation
$varTable['SERVICETAXCONFIG']       = 'servicetaxconfig';


$varTable['ASTROMATCH']				= 'astromatch';
$varTable['ASTROMATCHPACKAGEDET']	= 'astromatchpackagedet';
$varTable['ASTROMATCHPARTNER']		= 'astromatchpartner';
$varTable['BULKHOROSCOPELOG']		= 'bulkhoroscopelog';
$varTable['HOROALLCOUNTRIESCITIES']	= 'horoallcountriescities';
$varTable['HOROCITIES']				= 'horocities';
$varTable['HOROCOUNTRIES']			= 'horocountries';
$varTable['HORODETAILS']			= 'horodetails';
$varTable['HORODISTRICT']			= 'horodistrict';
$varTable['HOROINDIANSTATES']		= 'horoindianstates';
$varTable['HORONRISTATES']			= 'horonristates';
$varTable['CURRENCYCONVERSIONRATES']	= 'currencyconversionrates';

$varTable['MATCHWATCHMAIL_1']			= 'matchwatchmail_1';
$varTable['MATCHWATCHMAIL_2']			= 'matchwatchmail_2';
$varTable['MATCHWATCHMAIL_3']			= 'matchwatchmail_3';
$varTable['MATCHWATCHMAIL_4']			= 'matchwatchmail_4';
$varTable['DAILYMATCHWATCH_1']			= 'dailymatchwatch_1';
$varTable['DAILYMATCHWATCH_2']			= 'dailymatchwatch_2';
$varTable['DAILYMATCHWATCH_3']			= 'dailymatchwatch_3';
$varTable['DAILYMATCHWATCH_4']			= 'dailymatchwatch_4';
$varTable['ARCHIVEMATCHWATCHMAIL']			= 'archivematchwatchmail';

$varTable['PHOTOMATCHWATCHMAIL_1']			= 'photomatchwatchmail_1';
$varTable['PHOTOMATCHWATCHMAIL_2']			= 'photomatchwatchmail_2';
$varTable['PHOTOMATCHWATCHMAIL_3']			= 'photomatchwatchmail_3';
$varTable['PHOTOMATCHWATCHMAIL_4']			= 'photomatchwatchmail_4';
$varTable['PHOTOMATCHWATCH_1']			= 'photomatchwatch_1';
$varTable['PHOTOMATCHWATCH_2']			= 'photomatchwatch_2';
$varTable['PHOTOMATCHWATCH_3']			= 'photomatchwatch_3';
$varTable['PHOTOMATCHWATCH_4']			= 'photomatchwatch_4';
$varTable['PHOTOARCHIVEMATCHWATCHMAIL']			= 'photoarchivematchwatchmail';
$varTable['PHOTOMEMBERINFO']			= 'photomemberinfo';

//Franchisee Registration Info Table Name
$varTable['FRANCHISEE'] = 'franchisee';

//Franchisee Credit Balance Info Table Name
$varTable['FRANCHISEEPAYMENTS']='franchiseepayments';

//Franchisee CBS Tables
$varTable['CBSFRANCHISEE'] = 'cbs_franchisee';
$varTable['CBSFRANCHISEEPAYMENTS']='cbs_franchisepayments';
$varTable['CBSPREFRANCHISEEPAYMENTS']='cbs_prefranchisepayments';

//USER PLAN TABLES
$varTable['CHATLOGINFO']		= 'chat_initiated_log';
$varTable['ICBLOCKED']			= 'icblocked';
$varTable['ICBUDDY']			= 'icbuddy';
$varTable['ICPENDING']			= 'icpending';
$varTable['ICSTATUS']			= 'icstatus';

// TME - Doorstep
$varDbInfo['EPRDATABASE']		= 'collectioninterface';
$varTable['EASYPAYINFO']		= 'easypay_info';

//PAYMENT ASSISTANCE
$varPaymentAssistanceDbInfo['USERNAME']	= 'cbs';
$varPaymentAssistanceDbInfo['PASSWORD']	= "services";
$varPaymentAssistanceDbInfo['DATABASE']	= "cbssupportiface";

$varTable['PAYMENTOPTIONS']					= 'paymentoptions';
$varTable['PAYMENTOPTIONSFOLLOWUPDETAILS']	= 'paymentoptionsfollowupdetails';
$varTable['OFFERCODEINFO']					= 'offercodeinfo';
$varTable['OFFERMASTER']					= 'offermaster';
$varTable['OFFERCATEGORYINFO']				= 'offercategoryinfo';
$varTable['DOORSTEPPAYMENT']				= 'doorsteppayment';

//cbstminterface table
$varTable['PROFILEDETAILS']				= 'cbstmprofiledetails';

//cbs mailer report table
$varTable['CBSMAILER_REPORT'] = 'cbsmailer_report';

//RM INTERFACE TABLES
$TABLE['MEMBERCONTACTINFOBKUP'] = 'memberContactInfobkup';
$TABLE['MEMBERCONTACTINFOBKUPARCHIVE'] = 'memberContactInfobkuparchive';
$TABLE['MEMPARTNERPREF'] = 'mempartnerpref';
$TABLE['RMLOGININFO'] = 'rmlogininfo';
$TABLE['RMMEMBERINFO'] = 'rmmemberinfo';
$TABLE['RMMAIL'] = 'rmmail';
$TABLE['MEMBERCONTACTINFOBKUP'] = 'memberContactInfobkup';
$TABLE['RMVIEWPHONELOG'] = 'rmviewphonelog';
$TABLE['RMMEMBERLOG'] = 'rmmemberlogininfo';		      
$TABLE['RMMATRIUSERCONTACT'] = 'rmmatriusercontact';
$TABLE['RMMEMBERINFOBKUP'] = 'rmmemberinfobkup';

//CBS ONLINESWAYAMVARAM TABLES
$varTable['ONLINESWAYAMVARAMCHATCONFIGURATIONS'] = 'onlineswayamvaramchatconfigurations';
$varTable['ONLINESWAYAMVARAM']                   = 'onlineswayamvaram';
$varTable['ONLINESWAYAMVARAMIBALLCHATMESSAGE']   = 'iballChatMessage';
$varTable['OMMSURVEY']                           = 'ommsurvey';
$varTable['VMMUSERS']                            = 'ofUser';


?>