<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd"><html xmlns = "http://www.w3.org/1999/xhtml"><head>
<meta http - equiv = "Content-Type" content = "text/html; charset=GBK">
<title>上网认证< / title>
<link rel = "stylesheet" type = "text/css" href = "/portal/css/zzpt_mode_common2.css">
<link rel = "stylesheet" href = "/portal/css/zhifubao.css" type = "text/css">
<link rel = "stylesheet" type = "text/css" href = "/portal/css/pop.css">
<link rel = "stylesheet" type = "text/css" href = "/portal/css/button.css">
<!--jquery-->
<script type = "text/javascript" src = "/master/include/jquery.js?rand=1623073211326">< / script>
<script type = "text/javascript">
var noteicejson = [{"noticeForm1":"", "noticeForm2" : "", "noticeForm3" : "", "noticeForm4" : "", "noticeForm5" : "", "authNoticeForm" : "", "platNoticeForm" : "", "authNoticeFormList" : [] , "commonNoticeList" : [] , "muchNoticeList" : [] , "muchNoticeList1" : [] , "muchNoticeList2" : [] }];
var userid = "cse.pyou20";
< / script>
<script type = "text/javascript" src = "/portal/notice.js?rand=1623073211326">< / script>
<!--通用的js-->
<script type = "text/javascript" src = "/portal/ch.js">< / script>
<script type = "text/javascript" src = "/portal/portal_new.js?rand=1623073211326">< / script>
<script type = "text/javascript" src = "/portal/js/banner2.js?rand=1623073211326">< / script>
<script type = "text/javascript" src = "/portal/js/base.js">< / script>
<script type = "text/javascript" src = "/master/include/bootstrap.min.js">< / script>
< / head><body style = "background-color: white;" onload = "onbodyload()"><div class = "modal hide" id = "questionnaire">
<div class = "modal-dialog">
<div class = "modal-content">
<div class = "modal-header">
<h4 class = "modal-title">调查问卷< / h4>
< / div>
<div class = "modal-body">

<form id = "form_questionnaire" action = "/questionnaireAction.do" method = "post">
<input type = "hidden" name = "act" value = "edit_action">
<input type = "hidden" name = "answeruserid" id = "answeruserid" value = "">
<input type = "hidden" name = "class_id" value = "0">
<input type = "hidden" name = "group_id" value = "0">

< / form>

< / div>
<div class = "modal-footer">
<button type = "button" class = "btn btn-primary disabled" id = "quest_submit" disabled = "disabled">问题还没有回答完< / button>
< / div>
< / div>
< / div>
< / div><script type = "text/javascript" src = "/portal/js/bootstrap.min.js">< / script>
<link rel = "stylesheet" href = "/portal/css/bootstrap.min.css">
<script type = "text/javascript">
$(function() {



})
< / script > <link rel = "stylesheet" href = "/portal/images/css.css" type = "text/css" media = "screen">
<!-- <script type = "text/javascript" src = "/portal/js/yanue.pop.js">< / script>  -->
<style type = "text/css">
body{
	font - size: 12px
}
< / style>
<script language = "JavaScript">
< !--

	var url = 'http://www.gzu.edu.cn/';
if (url != "" && url != "http://") {

	window.open(url);


}

//-->
< / script>








<div class = "wrapper">
<div class = "header"><!--<img  src = "/portal/images/zzpt_mode_toppic.jpg" width = "980" height = "100" / >-->
<img src = "/portal/userimages/20141229/20141229124506_332.jpg" width = "980" height = "100">< / div>
<div class = "container" style = "width:auto;">
<div class = "part_conta">
<div style = "float:left; width:220px; height: 330px">
<form method = "POST" action = "/portalDisconnAction.do" name = "portalForm">
<input type = "hidden" name = "wlanuserip" id = "wlanuserip" value = "10.12.30.201">
<input type = "hidden" name = "wlanacname" id = "wlanacname" value = "SStud_WLAN">
<input type = "hidden" name = "chal_id" id = "chal_id" value = "">
<input type = "hidden" name = "chal_vector" id = "chal_vector" value = "">
<input type = "hidden" name = "auth_type" id = "auth_type" value = "PAP">
<input type = "hidden" name = "seq_id" id = "seq_id" value = "">
<input type = "hidden" name = "req_id" id = "req_id" value = "">
<input type = "hidden" name = "wlanacIp" id = "wlanacIp" value = "172.16.4.66">
<input type = "hidden" name = "ssid" id = "ssid" value = "">
<input type = "hidden" name = "vlan" id = "vlan" value = "38010751">
<input type = "hidden" name = "mac" id = "mac" value = "3C:9C:0F:1A:78:C7">
<input type = "hidden" name = "message" id = "message" value = "test(您可用时间为22490.33 小时，约937天)">
<input type = "hidden" name = "bank_acct" id = "bank_acct">
<input type = "hidden" name = "isCookies">
<input type = "hidden" name = "version" id = "version" value = "0">
<input type = "hidden" name = "authkey" id = "authkey" value = "amnoon">
<input type = "hidden" name = "url" id = "url" value = "http://www.gzu.edu.cn/">
<input type = "hidden" name = "usertime" id = "usertime" value = "80965185">
<input type = "hidden" name = "listpasscode" id = "listpasscode" value = "0"><!--是否获取验证码-->
<input type = "hidden" name = "listgetpass" id = "listgetpass" value = "0"><!--获取密码方式：1短信，2邮件-->
<input type = "hidden" name = "getpasstype" id = "getpasstype" value = "0"><!--是否开户：0开户，1仅查询-->
<input type = "hidden" name = "randstr" id = "randstr" value = "9044">
<input type = "hidden" name = "domain" id = "domain" value = "">
<input type = "hidden" name = "isRadiusProxy" id = "isRadiusProxy" value = "false">
<input type = "hidden" name = "usertype" id = "usertype" value = "0">
<input type = "hidden" name = "isHaveNotice" id = "isHaveNotice" value = "0">
<input type = "hidden" name = "times" id = "times" value = "12">
<input type = "hidden" name = "weizhi" id = "weizhi" value = "0">
<input type = "hidden" name = "smsid" id = "smsid" value = "0">
<input type = "hidden" name = "freeuser" id = "freeuser" value = "">
<input type = "hidden" name = "freepasswd" id = "freepasswd" value = "">
<input type = "hidden" name = "listwxauth" id = "listwxauth" value = "0">
<input type = "hidden" name = "templatetype" id = "templatetype" value = "1"><!--终端类型-->
<input type = "hidden" name = "tname" id = "tname" value = "2"><!--模板-->
<input type = "hidden" name = "logintype" id = "logintype" value = "0"><!--临时存储的字段，用来判断当前是哪个登陆，0是账号，1是微信，默认是0-->
<input type = "hidden" name = "act" id = "act" value = "DISCONN">
<input type = "hidden" name = "is189" id = "is189" value = "false">
<input type = "hidden" name = "terminalType" id = "terminalType" value = "">
<input type = "hidden" name = "checkterminal" id = "checkterminal" value = "true">
<input type = "hidden" name = "portalpageid" id = "portalpageid" value = "2">
<input type = "hidden" name = "listfreeauth" id = "listfreeauth" value = "0">
<input type = "hidden" name = "viewlogin" id = "viewlogin" value = "1">
<input type = "hidden" name = "userid" id = "userid" value = "cse.pyou20">
<input type = "hidden" name = "wisprpasswd" id = "wisprpasswd" value = "675218518">
<input type = "hidden" name = "twocode" id = "twocode" value = "0">
<input type = "hidden" name = "authGroupId" id = "authGroupId" value = "">
<input type = "hidden" name = "alipayappid" id = "alipayshopid" value = "">
<input type = "hidden" name = "wlanstalocation" id = "wlanstalocation" value = "">
<input type = "hidden" name = "wlanstamac" id = "wlanstamac" value = "">
<input type = "hidden" name = "wlanstaos" id = "wlanstaos" value = "">
<input type = "hidden" name = "wlanstahardtype" id = "wlanstahardtype" value = "">
<input type = "hidden" name = "smsoperatorsflat" id = "smsoperatorsflat" value = "">
<input type = "hidden" name = "reason" id = "reason" value = "">
<input type = "hidden" name = "res" id = "res" value = "">
<input type = "hidden" name = "userurl" id = "userurl" value = "">
<input type = "hidden" name = "challenge" id = "challenge" value = "">
<input type = "hidden" name = "uamip" id = "uamip" value = "">
<input type = "hidden" name = "uamport" id = "uamport" value = "">
<input type = "hidden" name = "toqrcode" id = "toqrcode" value = "">
<input type = "hidden" name = "isIOSPortal" id = "isIOSPortal" value = "false">
<input type = "hidden" name = "listwxsysauth" id = "listwxsysauth" value = "0"><div class = "loginbox">
<div class = "lbtop">< / div>
<div class = "lbmid">
<div class = "lb_cont">
<!--登陆前-->
<table width = "215" border = "0" cellspacing = "0" cellpadding = "0" class = "tab_lb" id = "ids0">
<tbody><tr>
<td colspan = "3" align = "center"><font color = "red">成功登陆，畅享网络吧< / font>< / td>

< / tr>
<tr>
<td colspan = "3" align = "center"><input type = "submit" tabindex = "3" class = "st_submit" style = "cursor: pointer;" title = "点击离线" value = "离线">< / td>

< / tr>
<tr>
<td colspan = "3" align = "center"><font color = "red">test(您可用时间为22490.33 小时，约937天) < / font > <script language = "JavaScript">
var temp = 'test(您可用时间为22490.33 小时，约937天)';
if (temp != "") {
	//alert(temp);
}
< / script>< / td>
< / tr>
< / tbody>< / table>
<table width = "100%" cellspacing = "0" cellpadding = "0" class = "tab_lb2" id = "ids1" style = "display:none" align = "center" border = "0">
<tbody><tr>
<td align = "center"><font color = "red">成功登陆，畅享网络吧< / font>< / td>

< / tr>
<tr>
<td align = "center"><input type = "submit" tabindex = "3" class = "st_submit" style = "cursor: pointer;" title = "点击离线" value = "离线">< / td>

< / tr>
<tr>
<td align = "center"><font color = "red">test(您可用时间为22490.33 小时，约937天) < / font > < / td>
< / tr>
< / tbody>< / table>
< / div>
<div class = "lb_txt" id = "logintext">
<!--h4>登录说明：< / h4>
< p>1. 请先填写手机号码，点击[获取密码]后，系统将上网密码通过短信发送到您的手机；< / p>
< p>2. 输入收到的上网密码，点[登录]即可免费上网。< / p-->
使用校园网账号登陆校园无线网，每个校园网账户可以在行政区网络同时登陆一个有线用户与一个无线用户。< / div>
<script type = "text/javascript">
$(function() {
	var pan_h = 48;
	if (document.getElementById("listfreeauth").value == "1" && document.getElementById("viewlogin").value == "0") {
		pan_h = $(".lb_txt").height() + 20;
	}
	else {
		pan_h = $(".loginbox").height() - $(".tab_lb").height();
	}

	var _lb_txt_h = $(".lb_txt").height() + 20;
	if (pan_h < _lb_txt_h)
	{
		$(".lb_txt").addClass("overfolw_y").height(pan_h - 60);
	}
});
< / script>
< / div>
< / div>

< / form>
< / div>
<div class = "focusbox">
<div class = "focusbox_banner">
<div id = "banner">
<div id = "banner_bg">< / div>
<!--标题背景-->
<div id = "banner_info">< / div>
<!--标题-->
<ul>

< / ul>
<div id = "banner_list">
<img src = "/portal/userimages/20141229/20141229124506_162.jpg" width = "100%" height = "328px" border = "0">
< / div>
< / div>

< / div>
< / div>
<div class = "clear">< / div>
< / div>
<div class = "part_contb">
<div class = "pcb_txt">
<p>
贵州大学无线校园网已建设完成，现正式上线运行，供全校师生免费使用。
< / p>
<p>
忘记校园网登陆账户密码的用户可以持有效证件到贵州大学北校区网络与信息化管理中心一楼服务中心查询修改，
< / p>
<p>
联系电话:8572233。
< / p>< / div>
< / div>
<div class = "part_contc">
<ul class = "pcc_list">

<!--<li>a href = "#" onClick = "javascript:addAccessLog(1,'','','')" title = ""><img src = "/" width = "108" height = "98" / > < / a>8pic< / li-->

< / ul>
<div class = "clear">< / div>
< / div>
< / div>
<div class = "footer">
<p>&nbsp; <!--foot-->< / p>
< / div>
< / div>

<div id = "bg_dialog">< / div>

<div id = "zadbox" style = "left: 71px; top: 104.333px;">
<div id = "time_tip_dialog">< / div>
<div id = "adconten">
<div class = "box2">
<div id = "container2">
<ul class = "box_ul2">
<!--<li>
	<img name = "cal2" id = "img2_1" src = "/portal/images/bg_middle.png" width = "320px" height = "240px" / >
	< / li>
	<li>
	<img name = "cal2" id = "img2_2" src = "/portal/images/bg_middle.png" width = "320px" height = "240px" / >
	< / li>
	<li>
	<img name = "cal2" id = "img2_2" src = "/portal/images/bg_middle.png" width = "320px" height = "240px" / >
	< / li>
	<li>
	<img name = "cal2" id = "img2_3" src = "/portal/images/bg_middle.png" width = "320px" height = "240px" / >
	< / li>-->


	< / ul>
	< / div>
	<div id = "imgIndex2">< / div>
	< / div>
	< / div>
	< / div>




	< / body>< / html>