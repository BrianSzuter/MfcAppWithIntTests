# MfcAppWithIntTests
Example of adding Unit &amp; Integration tests to a Legacy MFC Application.

By default, a basic MFC application presents several challenges for developers pursuing test-driven development. This includes:
- The CWinApp derived app lives in the executable.
- Major classes, like the initial CDocument, CView, CMDIFrameWnd, CMDIChildWnd also live in the executable.

For unit testing, there are techniques to <a href="http://stackoverflow.com/questions/1905070/unit-testing-an-executable-project">Unit Test an executable</a>, but generally unit testing frameworks are not intended for testing executables. However, when it comes to automated integration tests or automated functional tests, these techniques don't seem to work at all. In general, it is much more difficult to test an executable than it is to test a DLL.

One possible solution, which this little project demonstrates is possible, is to push the entire MFC application into a DLL. This enables:
- Directly unit testing all the major components in the same binary that is shipped / put in production.
- Driving full application functionality from a different executable, including your integration / functional test frame of choice.
- The ability to override and drive the message loop in a test environment to functionally drive MFC from an API level.

Please note that this is a work in progress.
