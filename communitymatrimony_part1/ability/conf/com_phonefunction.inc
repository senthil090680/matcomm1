<?php
include_once($varRootBasePath."/conf/basefunctions.inc");

function fnInsertAutoClickToLog($objRegister,$MatriId,$iCallNumber,$iAutoCall,$iCountry,$varAge,$varGender,$varCommunityId,$varPhonePin)
{
    global $varTable;
	$result=false; //inisialize

	if(strlen($iCallNumber)>=5){
		if($iAutoCall && $iCountry && $MatriId && $varPhonePin){
			$varCondition	= " WHERE MatriId='".$MatriId."'";
			$varClickToCallResults	= $objRegister->select($varTable['ASSUREDCLICKTOCALLLOG'],array('Id'),$varCondition,1);
			if($varClickToCallResults[0]['Id']){
				$varAutoCallID=$varClickToCallResults[0]['Id'];
				$varCondition	= " MatriId='".$MatriId."'";
				$varFields		= array('PhoneNo','DateInserted','Age','Gender','Language');
				$varFieldsValues = array("'".$iAutoCall."'","now()","'".$varAge."'","'".$varGender."'","'".$varCommunityId."'");
				$res=$objRegister->update($varTable['ASSUREDCLICKTOCALLLOG'],$varFields,$varFieldsValues,$varCondition);

			}else{
				$varFields = array('MatriId','PhoneNo','DateInserted','Age','Gender','Language');
				$varFieldsValues = array("'".$MatriId."'","'".$iAutoCall."'","now()","'".$varAge."'","'".$varGender."'","'".$varCommunityId."'");
				$varAutoCallID = $objRegister->insert($varTable['ASSUREDCLICKTOCALLLOG'],$varFields,$varFieldsValues);
			}
			if($varAutoCallID){

			$sExecCommand = "php /home/product/community/www/register/ivrcall.php $iAutoCall $iCountry $varAutoCallID $MatriId $varPhonePin";
			  $logfilename = 'autocall.txt';		 
			  $varCmd = escapeshellcmd($sExecCommand);
			  $varlogFile = "CBS_execlog".date('Y-m-d').'.txt';
			  escapeexec("$varCmd > /home/product/community/www/register/ivrlog/".$logfilename." &",$varlogFile);
			  //exec("$varCmd > /home/product/community/www/register/ivrlog/".$logfilename." &");
			  $result=true;
		
			}
		}
	}
	return $result;

}

function fnGetIvrNo($iCountry){
  if($iCountry=='91')
    $sIvrNo = "<b>1-800-3000-2222</b>";
  else	
    $sIvrNo = "<b>91-44-39115022</b>";

  /*elseif($iCountry=='1')
    $sIvrNo = "<b>1-888-824-6146</b>";
  elseif($iCountry=='44')
    $sIvrNo = "<b>0-808-168-3055</b>";
  else
    $sIvrNo = "<b>1-800-3000-3344</b>";*/
  return $sIvrNo;
}

function getPhonePinNo($objMasterDBConn,$phonePinTable) {

	$funQuery	= "LOCK TABLES ".$phonePinTable." WRITE";
	mysql_query($funQuery);

	$argFields			= array('PinNo');
	$argCondition		= "WHERE UsedStatus=0 LIMIT 0,1";
	$varPinInfoResultSet= $objMasterDBConn->select($phonePinTable,$argFields,$argCondition,0);
	$varPinInfoResult	= mysql_fetch_assoc($varPinInfoResultSet);

	$varPhonePinNo		= $varPinInfoResult["PinNo"];

	$argFields 			= array('UsedStatus');
	$argFieldsValues	= array(1);
	$argCondition		= " PinNo=".$varPhonePinNo;
	$varUpdateId		= $objMasterDBConn->update($phonePinTable,$argFields,$argFieldsValues,$argCondition);

	$funQuery	= "UNLOCK TABLES";
	mysql_query($funQuery);

	return $varPhonePinNo;
}



?>