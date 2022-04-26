cmd_/home/yamiyume/module_exercise/modules.order := {   echo /home/yamiyume/module_exercise/simple.ko; :; } | awk '!x[$$0]++' - > /home/yamiyume/module_exercise/modules.order
