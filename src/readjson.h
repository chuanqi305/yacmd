#ifndef __READ_JSON_H__
#define __READ_JSON_H__
#include "json.h"

typedef struct config_tree{
	char file_path[1024];
	struct JSON * json;
} config_tree;

typedef config_tree *pconfig_tree;
 
typedef struct JSON *pconfig_node;

typedef struct JSON *pconfig_attr;

extern pconfig_tree load_config_tree(char *path);

extern pconfig_node get_root_node(pconfig_tree tree);

extern pconfig_node  get_first_child_node(pconfig_node root);

extern pconfig_node  get_next_node(pconfig_node current_root);

extern pconfig_attr get_node_first_attribute(pconfig_node node);

extern pconfig_attr get_next_attribute(pconfig_attr current_attr);

extern char * get_attribute_name(pconfig_attr attr);

extern char * get_attribute_value(pconfig_attr attr);

extern void free_config_tree(pconfig_tree root);

extern int get_node_line(pconfig_node node);
#endif /*READ_JSON_H__*/

