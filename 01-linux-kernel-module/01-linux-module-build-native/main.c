#include <linux/module.h> /* Define module_init(), module_exit */

#define DRIVER_AUTHOR   "DucHM42 duchm42@fpt.com"
#define DRIVER_DESC     "Hello world kernel module"
#define DRIVER_VERS     "1.0"

static int __init chdev_init(void){
    pr_info("Hello world kernel module\n");
    return 0;
}

static void __exit chdev_exit(void){
    pr_info("Goodbye\n");
}

/* Register the init and exit function */
module_init(chdev_init);
module_exit(chdev_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_VERSION(DRIVER_VERS);