/******************************************************
注意：例welcometonowcoderrrrr,若按所给方法压缩则结果为：
      w1e1l1c1o1m1e1t1o1n1o1w1c1o1d1e1r5,长度比所给的字符串要长，
      所以需要返回原来的字符串。
*********************************************************/
class Zipper {
public:
    string zipString(string iniString) 
    {
        // write code here
        int length = iniString.size();
        if(length == 0)
            return "";
        int i = 0; 
        int j = 0;
        string str;
        while(i < length)
        {
            while(i < length &&　iniString[i] == iniString[j])
                i++;
            str += iniString[j];
            str += to_string(i-j);
            j=i;
        }
        if(str.size() >= length)
            return iniString;
        else
            return str;
        return iniString;
    }
};
