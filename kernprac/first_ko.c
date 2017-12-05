#include<linux/module.h>
#include<linux/version.h>
#include<linux/kernel.h>
int my_init(void)
{
printk(KERN_INFO "Jai Ganesha");
return 0;
}
void my_cleanup(void)
{
printk(KERN_INFO " Bye Ganesh ");
}
module_init(my_init);
module_exit(my_cleanup);
MODULE_LICENSE("GPL");
