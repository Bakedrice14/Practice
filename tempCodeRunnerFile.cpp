
        double ans;
        cin >> x >> y >> z;
        x *= 5;
        y *= 10;
        mod = (x + y) % z;
        ans = double(x + y) / z;
        ans = floor(ans);
        cout << ans << endl;
    }

    return 0;
}