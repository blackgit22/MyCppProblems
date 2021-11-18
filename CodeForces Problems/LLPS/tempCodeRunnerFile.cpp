                subsequences[i - 1] += str[j];
            }
        }
    }

    for (int i = 0; i < size - 1; i++)
    {
        if (subsequences[i] == reverse(subsequences[i]) && subsequences[i].length() > counter && subsequences[i] != str)
        {
            LLPS = subsequences[i];
            counter = subsequences[i].length();
        }
    }
    cout << LLPS;
}