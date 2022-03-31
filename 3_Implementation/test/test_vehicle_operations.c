#include "unity.h"
#include <vehicle_operations.h>

/* Modify these two lines according to the project */
#include <vehicle_operations.h>
#define PROJECT_NAME    "Vehicle Parking Management"

/* Prototypes for all the test functions */
struct vehicle * test_add ( int t, int num, int row, int col );
void test_changecol ( struct vehicle * ) ;
void test_getfreerowcol ( int, int * ) ;
void test_getrcbyinfo ( int, int, int * ) ;
void test_display( ) ;

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_add);
  RUN_TEST(test_changecol);
  RUN_TEST(test_getfreerowcol);
  RUN_TEST(test_getrcbyinfo);
  RUN_TEST(test_display);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_add(int,int,int,int) {
 
}

void test_changecol ( struct vehicle * )  {
 
  /* Dummy fail*/
}

void test_getfreerowcol ( int, int * ) {
  
  /* Dummy fail*/

}

void test_getrcbyinfo ( int, int, int * )  {
  
  /* Dummy fail*/
}

void test_display( )  {

  
  /* Dummy fail*/
  
}