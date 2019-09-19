/Add the following line to the top of the code file.
#include <stdlib.h>

// Process command line parameter looking for a -n string name
// and should be placed after the ros::init() invocation.
// rosrun <package_name> <executable_name> -n <new_name>
// or
// rosrun subscriber_package subscriber_node -n alternate_topic
int opt;
while ((opt = getopt(argc, (argv), "n:")) != -1) {
  switch (opt) {
    case 'n':
      topic_name = optarg;
      break;
    default:
      printf("The -%c is not a recognized parameter\n", opt);
      break; 
  }
}
