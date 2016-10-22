#include <linux/module.h> // included for all kernel modules
#include <linux/kernel.h> // included for KERN_INFO
#include <linux/init.h>		// included for __init and __exit macros

MODULE_AUTHOR("Caglar");
MODULE_DESCRIPTION("ilk modul uygulamasi.");

static int hello_init(void){
	printk(KERN_INFO "Merhaba modul dunyasi!!\n");

	return 0;
}

static void hello_exit(void){
	printk(KERN_INFO "Module kapat!\n");
}

module_init(hello_init);
module_exit(hello_exit);
