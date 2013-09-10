```cpp
std::string &strip_tags(std::string &html)
{
    size_t i, j;
    while (true) {
        if ((i = html.find('<')) == std::string::npos) {
            break;
        }
        if ((j = html.find('>')) == std::string::npos) {
            html.erase(i);
            break;
        }
        html.erase(i, j-i+1);
    }
 
    return html;
}
```
