# MfcAppWithIntTests
Example of adding Unit &amp; Integration tests to a Legacy C++ MFC Application.

n general, it is much more difficult to test an executable than it is to test a DLL. And, by default, a basic MFC application puts everything in the executable including:
- The CWinApp derived app lives in the executable.
- Major classes, like the initial CDocument, CView, CMDIFrameWnd, CMDIChildWnd also live in the executable.

This presents several challenges for developers pursuing test-driven development.

For unit testing, there are <a href="http://stackoverflow.com/questions/23088252/how-to-test-an-exe-with-google-test">techniques</a> to <a href="http://stackoverflow.com/questions/1905070/unit-testing-an-executable-project">unit test</a> an executable, but these can be painful as, generally speaking, unit testing frameworks are not intended for testing executables. However, when it comes to automated integration tests or automated functional tests, these techniques break down, as they all involve creating multiple binaries for the same objects.

One possible solution, which this little project demonstrates is possible, is to push the entire MFC application into a DLL. This enables:
- Directly unit testing all the major components in the same binary that is shipped / put in production, using your favorite unit testing framework - and without jumping through hoops or creating major maintenance points.
- Driving full application functionality from a different executable, including your integration / functional test frame of choice.
- The ability to override and drive the message loop in a test environment to functionally drive MFC from an API level.

Search the solution for "Point of Interest" to see how this application differs from a basic new MFC application, and you'll quickly see how you can make your legacy MFC application more testable.

Please note that this is a work in progress.
