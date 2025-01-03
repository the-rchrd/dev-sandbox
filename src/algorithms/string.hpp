#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>
#include <unordered_set>

#include <ds/time/speed_test.hpp>

namespace ds
{
    namespace algorithms
    {
        namespace string
        {
            namespace find_most_common_symbol
            {
                void twoCyclesMethod(const std::string path)
                {
                    ds::SpeedTest speed_test;

                    std::ifstream in(path);
                    
                    std::string s;
                    in >> s;

                    std::cout << "\t~two cycles method with O(N^2) complexity~" << std::endl;

                    char sym = ' ';
                    int res_cnt = 0;
    
                    ////////////////////////////////////////// ...two cycles...
                    ///         ———————————————————        ///
                    ///         —O(N^2) complexity—        ///
                    for (int i = 0; i < (int) s.length(); i++)
                    {
                        int cnt = 0;
                        for (int j = 0; j < (int) s.length(); j++)
                        {
                            if (s[i] == s[j])
                                cnt++;
                        }
                        if (cnt > res_cnt)
                        {
                            sym = s[i];
                            res_cnt = cnt;
                        }
                    }
                    ///         ———————————————————        ///
                    //////////////////////////////////////////

                    speed_test.count();

                    std::cout << "\t—most common symbol is [" << sym << "], it was met " << res_cnt << " times—" << std::endl;

                    speed_test.print();
                }

                void unorderedSetMethod(const std::string path)
                {
                    ds::SpeedTest speed_test;

                    std::ifstream in(path);
                    
                    std::string s;
                    in >> s;

                    std::cout << "\t~unordered set method with O(K*N) complexity~" << std::endl;

                    char sym = ' ';
                    int res_cnt = 0;
                    std::unordered_set<char> unique_str(s.begin(), s.end());

                    ////////////////////////////////////////// ...unordered_set...
                    ///         ———————————————————        ///
                    ///         —O(K*N) complexity—        ///
                    for (char ch : unique_str)
                    {
                        int cnt = 0;
                        for (int i = 0; i < (int) s.length(); i++)
                        {
                            if (ch == s[i])
                            cnt++;
                        }
                        if (cnt > res_cnt)
                        {
                            sym = ch;
                            res_cnt = cnt;
                        }
                    }
                    ///         ———————————————————        ///
                    //////////////////////////////////////////

                    speed_test.count();

                    std::cout << "\t—most common symbol is [" << sym << "], it was met " << res_cnt << " times—" << std::endl;

                    speed_test.print();
                }

                void unorderedMapMethod(const std::string path)
                {
                    ds::SpeedTest speed_test;

                    std::ifstream in(path);
                    
                    std::string s;
                    in >> s;

                    std::cout << "\t~unordered map method with O(N) complexity~" << std::endl;

                    char sym = ' ';
                    int res_cnt = 0;
                    std::unordered_map<char, int> char_map;
                
                    /////////////////////////////////////// ...unordered_set...
                    ///        —————————————————        ///
                    ///        —O(N) complexity—        ///
                    for (int i = 0; i < (int) s.length(); i++)
                    {
                        char_map[s[i]]++;
                        if (char_map[s[i]] > res_cnt)
                        {
                            sym = s[i];
                            res_cnt = char_map[s[i]];
                        }
                    }
                    ///        —————————————————        ///
                    ///////////////////////////////////////

                    speed_test.count();

                    std::cout << "\t—most common symbol is [" << sym << "], it was met " << res_cnt << " times—" << std::endl;

                    speed_test.print();
                }
            }
        }
    }
}
