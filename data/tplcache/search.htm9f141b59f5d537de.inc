<?php
$z[0]=Array("global","",230,256);
$z[0][4]['name']="cfg_webname";
$z[1]=Array("field","",297,326);
$z[1][4]['name']="keywords";
$z[2]=Array("field","",366,424);
$z[2][4]['name']="description";
$z[2][4]['function']="html2text(@me)";
$z[3]=Array("include","",1053,1088);
$z[3][4]['filename']="head.htm";
$z[4]=Array("channel","\r\n        <li><a href='[field:typeurl/]'>[field:typename/]</a></li>\r\n        ",1611,1728);
$z[4][4]['type']="son";
$z[5]=Array("global","",1846,1901);
$z[5][4]['name']="keyword";
$z[5][4]['function']="RemoveXSS(@me)";
$z[6]=Array("field","",2178,2207);
$z[6][4]['name']="typename";
$z[7]=Array("list","\r\n      <figure class=\"col-xs-12 col-sm-6 col-md-6 col-lg-6\">\r\n        <article class=\"ny-news\"><a href=\"[field:arcurl/]\" title=\"[field:title/]\" target=\"_blank\" class=\"pull-left pic-link visible-lg\"><span class=\"case-hover\"><span class=\"hover-link\"></span></span><img src=\"[field:picname/]\" class=\"ylw-img-responsive2\" alt=\"[field:title/]\"/></a>\r\n          <h4><a href=\"[field:arcurl/]\" title=\"[field:title/]\" target=\"_blank\">[field:title/]</a></h4>\r\n          <p>[field:description function=\"cn_substr(@me,160)\"/]...</p>\r\n          <p><span class=\"fl\"><a href='[field:typeurl/]'>[field:typename/]</a></span><span class=\"gz\">[field:click/]</span><span class=\"sj\">[field:pubdate function=\"MyDate('Y-m-d',@me)\"/]</span></p>\r\n        </article>\r\n      </figure>\r\n      ",2270,3073);
$z[7][4]['pagesize']="6";
$z[8]=Array("pagelist","",3172,3243);
$z[8][4]['listitem']="info,index,end,pre,next,pageno";
$z[8][4]['listsize']="5";
$z[9]=Array("include","",3343,3380);
$z[9][4]['filename']="footer.htm";

?>