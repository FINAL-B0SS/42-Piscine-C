ldapsearch -QLLL "cn=*bon*" cn | sed -n '/cn:/p' | grep 'BON' | wc -l | sed 's: *::g'
