# tut4
HeapArrays

4.4 HeapArrays Class
Use the ARR SIZE preprocessor constant from defs.h to initialize each array to its proper size.
1. Member variables:
	
	(a) A dynamically allocated array of Episode objects.
	
	(b) A dynamically allocated array of Episode pointers.
2. A no-argument constructor. Initialize both arrays such that every array location either contains an Episode object or points to an Episode object.
3. A destructor. Ensure that all dynamically allocated memory is freed.
4. Member functions - make a getter for each array. Since these are test classes, to keep it simple, use return values rather that output parameters:
 
 	(a) getObjectArray() should return the dynamically allocated array of Episode objects.
	
	(b) getPointerArray() should return the dynamically allocated array of Episode pointers.
