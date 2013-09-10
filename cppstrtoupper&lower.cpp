```cpp
/**
 * @brief convert string to upper case throught transform method,
 * also can use transform method directly
 *
 * @param s
 *
 * @return the upper case result saved still in s
 */
string& strtoupper(string& s)
{
    transform(s.begin(),s.end(),s.begin(),::toupper);
    return s;
}
 
/**
 * @brief convert string to lower case throught transform method,
 * also can use transform method directly
 *
 * @param s
 *
 * @return the lower case result saved still in s
 */
string& strtolower(string& s)
{
    transform(s.begin(),s.end(),s.begin(),::tolower);
    return s;
}
```
