
#include <linux/module.h>
#include <linux/init.h>
#include <linux/kernel.h>

MODULE_AUTHOR("Tugcan Hoser");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("My first Linux driver");
MODULE_VERSION("1.0");


static int hello_init(void){
   printk(KERN_ALERT "Hello World!");
   return 0;
}

static void hello_exit(void){
   printk(KERN_ALERT "Bye Bye Module");
}

module_init(hello_init);
module_exit(hello_exit);

