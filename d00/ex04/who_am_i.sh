ldapsearch -Q "(uid=maljean)" | grep "dn" | sed s'/dn: //'
