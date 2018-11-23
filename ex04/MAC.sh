ifconfig -a | grep -w  ether | cut -c8- | cut -d" " -f1
