/* ofd.c – Our First Driver code */

#include <linux/module.h>
#include <linux/version.h>
#include <linux/kernel.h>

static int __init ofd_init(void) /* Constructor */
{
    printk(KERN_INFO "Hello: Registered");

    return 0;
}

static void __exit ofd_exit(void) /* Destructor */
{
    printk(KERN_INFO "Bye: Unregistered");
}

module_init(ofd_init);
module_exit(ofd_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Lokesh Jaliminche <lokesh.jaliminche@gmail.com>");
MODULE_DESCRIPTION("Our First Driver");
