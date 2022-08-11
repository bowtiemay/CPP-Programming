// MODULE:		dblstk1.cpp
// PROGRAMMER:	Maya Cobb
// LANGUAGE:	C++
// DATE:		08/03/2022
//
// PURPOSE:
//		Implementations for class DoubleStack.

#include <stdlib.h>
#include "dblstk.h"
#include "<stack>"

class	DoubleStack
{ 
	public:

	 
		// Constructor.
	
	DoubleStack::DoubleStack(void) {

	}
	 
		// Copy Constructor.
	
	DoubleStack::DoubleStack( const DoubleStack& rhs );
	
		// Destructor.
		
	~DoubleStack(void);
	
		// Assignment operator=.
		
	DoubleStack&	operator=( DoubleStack& rhs);

		// Add item to stack, making it the topmost item.
		// Return value 1=success/0=failure.

	DoubleStack::int	push( double&	item );

		// Remove top item from stack and return it in item.
		// Return value 1=success/0=failure.

	DoubleStack::int	pop( double&	item );

		// Determine if the stack is empty.
		// Return value 1=empty/0=non-empty.

	DoubleStack::int	empty(void);
	
		// Inquire the capacity of the stack.
		
	DoubleStack::size_t	capacity(void);
	
		// Inquire the number of items on the stack.
		
	DoubleStack::size_t	size(void);

		// Compare 2 stacks to see if the contain the same data.

	DoubleStack::int	operator==( DoubleStack&	rhs );
	
	private:
	double	*data;		// Pointer to dynamic stack area.
	size_t	stack_size;	// Capacity of stack.
	size_t	tos;		// Top of stack. tos==0 ==> empty stack.
};
