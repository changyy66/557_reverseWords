// 557_reverseWords.cpp : 定义控制台应用程序的入口点。
//
/*
给定一个字符串，你需要反转字符串中每个单词的字符顺序，同时仍保留空格和单词的初始顺序。

示例 1:

输入: "Let's take LeetCode contest"
输出: "s'teL ekat edoCteeL tsetnoc" 
注意：在字符串中，每个单词由单个空格分隔，并且字符串中不会有任何额外的空格。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/reverse-words-in-a-string-iii
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/
#include "stdafx.h"
#include <string>

using namespace std;

class Solution {
public:
	string reverseWords(string s) {
		int start = 0, i = 0;
		for (; i < s.size(); i++)
		{
			if (s[i] == ' ')
			{
				for (int j = start, k = 0; k < (i - start) / 2; j++, k++)
				{
					char t = s[j];
					s[j] = s[i - 1 - k];
					s[i - 1 - k] = t;
				}
				while (s[i] == ' ')i++;
				start = i;
			}
		}
		if (start != i)
		{
			for (int j = start, k = 0; k < (i - start) / 2; j++, k++)
			{
				char t = s[j];
				s[j] = s[i - 1 - k];
				s[i - 1 - k] = t;
			}
		}
		return s;
	}
};
int main()
{
    return 0;
}

