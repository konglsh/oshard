#include <stdio.h>
#include "tests/threads/tests.h"
#include "threads/malloc.h"
#include "threads/synch.h"
#include "threads/thread.h"
#include "devices/timer.h"
#include "threads/init.h"
void
test_hello (void) 
{
  printf("hello, world!");
  return;
}
