#include "stdafx.h"
#include "CppUnitTest.h"
#include "MFCLegacyAppView.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace MFCLegacyAppUnitTests
{		
	TEST_CLASS(MFCLegacyAppViewTests)
	{
	public:
		
		TEST_METHOD(RecordPrintingSuccess_Always_IncrementsPrintCount)
		{
			CMFCLegacyAppView viewUnderTest;

			viewUnderTest.RecordPrintingSuccess();

			Assert::AreEqual(1, viewUnderTest.m_NumberOfSuccessfulPrints);
		}

		TEST_METHOD(OnEndPrinting_Always_IncrementsPrintCount)
		{
			CMFCLegacyAppView viewUnderTest;

			viewUnderTest.OnEndPrinting(nullptr, nullptr);

			Assert::AreEqual(1, viewUnderTest.m_NumberOfSuccessfulPrints);
		}
		
	};
}