<!-- :: Batch section
@echo of
setlocal
echo Select an option:
for /F "delims=" %%a in ('mshta.exe "%~F0"') do set "HTAreply=%%a"
echo End of HTA window, reply: "%HTAreply%"
goto :EOF
-->

<HTML><HEAD>
<HTA:APPLICATION ID="nonPoliceCalculator" ICON="Yahoo.ico" MAXIMIZEBUTTON="no" border="thin" showInTaskbar="yes" innerBorder="no" reseize="no" scroll="no" singleInstance="yes" selection="no" version="1.0" />
<TITLE>nonPoliceCalculator</TITLE>
</HEAD>
<script language="javascript">
	window.resizeTo(270, 320);
	isClear = true;
	function insertValue(value) {
		if (isClear == true){
			document.getElementById("txtDisplay").value = value
			isClear = false
		} else {
			document.getElementById("txtDisplay").value += value
		}
	}
	function clearValue() {
		document.getElementById("txtDisplay").value = "0";
		isClear = true;
	}
	function evalStatement() {
		document.getElementById("txtDisplay").value = eval(document.getElementById("txtDisplay").value)
	}
</script>
<BODY>
	<div style="text-align: center">
		<input type="text" id="txtDisplay" style="font-size: 24px; width: 220px; text-align: right" value="0" /><br /><br />
		<input type="button" style="height:50px;width:50px" value="7" onclick="insertValue(this.value)"></input>
		<input type="button" style="height:50px;width:50px" value="8" onclick="insertValue(this.value)"></input>
		<input type="button" style="height:50px;width:50px" value="9" onclick="insertValue(this.value)"></input>
		<input type="button" style="height:50px;width:50px" value="*" onclick="insertValue(this.value)"></input><br />
		<input type="button" style="height:50px;width:50px" value="4" onclick="insertValue(this.value)"></input>
		<input type="button" style="height:50px;width:50px" value="5" onclick="insertValue(this.value)"></input>
		<input type="button" style="height:50px;width:50px" value="6" onclick="insertValue(this.value)"></input>
		<input type="button" style="height:50px;width:50px" value="-" onclick="insertValue(this.value)"></input><br />
		<input type="button" style="height:50px;width:50px" value="1" onclick="insertValue(this.value)"></input>
		<input type="button" style="height:50px;width:50px" value="2" onclick="insertValue(this.value)"></input>
		<input type="button" style="height:50px;width:50px" value="3" onclick="insertValue(this.value)"></input>
		<input type="button" style="height:50px;width:50px" value="+" onclick="insertValue(this.value)"></input><br />
		<input type="button" style="height:50px;width:50px" value="CLR" onclick="clearValue()"></input>
		<input type="button" style="height:50px;width:50px" value="0" onclick="insertValue(this.value)"></input>
		<input type="button" style="height:50px;width:50px" value="." onclick="insertValue(this.value)"></input>
		<input type="button" style="height:50px;width:50px" value="="  onclick="evalStatement()"></input><br />
	</div>
</BODY></HTML>