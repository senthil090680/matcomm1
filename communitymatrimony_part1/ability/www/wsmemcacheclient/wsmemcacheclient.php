<?php

define("_ID_WS_HTTP_USER", "wsmemservice");
define("_ID_WS_HTTP_PASS", "j~w1s|s1a}m1d{s4m4$");

class WSMemcacheClient {
	public function __construct() {
	}

	public function processRequest($argMatriId, $argTable) {
		$url = "http://www.communitymatrimony.com/wsmemcache/wsmemcache.php";
		$postValues['matriid'] = $argMatriId;
		$postValues['table'] = $argTable;

		$con = curl_init($url);

		curl_setopt ($con, CURLOPT_POST, true);
		curl_setopt ($con, CURLOPT_POSTFIELDS, $postValues);

		curl_setopt($con, CURLOPT_USERPWD, _ID_WS_HTTP_USER .':'. _ID_WS_HTTP_PASS );

		curl_setopt($con, CURLOPT_RETURNTRANSFER, true);

		curl_setopt($con, CURLOPT_FOLLOWLOCATION, 1);

		$response = curl_exec($con);

		$responseInfo = curl_getinfo($con);

		curl_close($con);

		return $response;
	}
}




//Testing

$wsmemClient = new WSMemcacheClient;

$matriId = "AGR100158";
$table = "memberinfo";

$rs = $wsmemClient->processRequest($matriId, $table);



