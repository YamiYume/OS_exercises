# include <linux/init.h>
# include <linux/kernel.h>
# include <linux/module.h>
# include <linux/hash.h>
# include <linux/gcd.h>
# include <asm/param.h>
# include <linux/jiffies.h>

int simple_init(void){
	printk(KERN_INFO "Loading Kernel Module\n");
	printk(KERN_INFO "Golden ratio prime is %llu\n",
	       GOLDEN_RATIO_PRIME);
	printk(KERN_INFO "HZ is %u", HZ);			
	printk(KERN_INFO "Jiffies is %lu", jiffies);
	return 0;
}


void simple_exit(void){
	unsigned long a = 3300, b = 24;
	unsigned long c;
	c = gcd(a, b);
	printk(KERN_INFO "Removing Kernel Module\n");
	printk(KERN_INFO "The GCD of %lu and %lu is %lu\n", a, b, c);
	printk(KERN_INFO "Jiffies now is %lu", jiffies);
}

module_init(simple_init);
module_exit(simple_exit);

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("simple_module");
MODULE_AUTHOR("Pawell");
