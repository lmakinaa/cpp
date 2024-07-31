Exceptions:
	the primary issue with return codes is that the error handling code ends up intricately linked to the normal control flow of the code. This in turn ends up constraining both how the code is laid out, and how errors can be reasonably handled.

	stack unwinding provides us with some very useful behavior -- if a function does not want to handle an exception, it doesn’t have to. The exception will propagate up the stack until it finds someone who will! This allows us to decide where in the call stack is the most appropriate place to handle any errors that may occur.

	The call stack may or may not be unwound if an exception is unhandled.
	If the stack is not unwound, local variables will not be destroyed, which may cause problems if those variables have non-trivial destructors.

	A catch-all handler works just like a normal catch block, except that instead of using a specific type to catch, it uses the ellipses operator (…) as the type to catch. For this reason, the catch-all handler is also sometimes called an “ellipsis catch handler”

	exception handlers will not only match classes of a specific type, they’ll also match classes derived from that specific type as well! Consider the following example:

	Handlers for derived exception classes should be listed before those for base classes.

	function try blocks:
	```
	class A
	{
	private:
		int m_x;
	public:
		A(int x) : m_x{x}
		{
			if (x <= 0)
				throw 1; // Exception thrown here
		}
	};

	class B : public A
	{
	public:
		B(int x) try : A{x} // note addition of try keyword here
		{
		}
		catch (...) // note this is at same level of indentation as the function itself
		{
					// Exceptions from member initializer list or
					// from constructor body are caught here

					std::cerr << "Exception caught\n";

					throw; // rethrow the existing exception
		}
	};

	int main()
	{
		try
		{
			B b{0};
		}
		catch (int)
		{
			std::cout << "Oops\n";
		}
	}
	```
	![Alt text](/Users/ijaija/.TemporaryItems/folders.103021/TemporaryItems/(A Document Being Saved By screencaptureui)/Screen Shot 2024-09-22 at 6.20.52 PM.png)
	

	The throw() in void myFunction() throw(); is not a place to pass parameters. It's an exception specification, which is a deprecated feature in C++. The parentheses () after throw are empty, indicating that the function promises not to throw any exceptions.

	If you wanted to specify that a function might throw exceptions of a specific type, you could list the types in the parentheses. For example:

