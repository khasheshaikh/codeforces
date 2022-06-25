for (int i = 0; i < n; i++)
    {
        v.push_back(make_pair(arr[i], arr[i + 1]));
    }

    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        cout << v[i].first << " " << v[i].second<<endl;
    }