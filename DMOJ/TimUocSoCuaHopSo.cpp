#include <iostream>
#include <cmath>
#include <numeric> // Chứa hàm std::gcd từ C++17 trở lên

using namespace std;

// Hàm nhân modulo (a * b) % mod tránh tràn số cho kiểu dữ liệu long long
long long mulMod(long long a, long long b, long long mod) {
    return (long long)((__int128)a * b % mod);
}

// Hàm f(x) dùng để sinh số ngẫu nhiên tiếp theo trong chuỗi chữ Rho
long long f(long long x, long long c, long long n) {
    return (mulMod(x, x, n) + c) % n;
}

// Hàm Pollard's Rho: Trả về MỘT ước thực sự của hợp số n
long long pollardRho(long long n) {
    // Các trường hợp cơ bản nhỏ
    if (n % 2 == 0) return 2;
    if (n % 3 == 0) return 3;

    long long tortoise = 2; // Rùa xuất phát tại 2
    long long hare = 2;     // Thỏ xuất phát tại 2
    long long c = 1;        // Hằng số c ban đầu của hàm f(x)
    long long g = 1;        // Biến lưu ước số tìm được (GCD)

    // Vòng lặp chạy đua: Khi chưa tìm được ước (g == 1), Rùa và Thỏ tiếp tục chạy
    while (g == 1) {
        // 1. Rùa tiến 1 bước
        tortoise = f(tortoise, c, n);

        // 2. Thỏ tiến 2 bước liên tiếp
        hare = f(hare, c, n);
        hare = f(hare, c, n);

        // 3. Tính GCD của khoảng cách tuyệt đối giữa Rùa và Thỏ với n
        long long diff = abs(tortoise - hare);
        g = std::gcd(diff, n); // Hàm tính ước chung lớn nhất có sẵn của C++

        // 4. Xử lý trường hợp thất bại (g == n)
        // Rùa và Thỏ trùng nhau hoàn toàn trước khi tìm được ước
        if (g == n) {
            // Thay đổi hằng số c và điểm xuất phát ngẫu nhiên để chạy lại
            c++;
            tortoise = 2;
            hare = 2;
            g = 1; // Đặt lại g = 1 để vòng lặp while tiếp tục chạy cấu hình mới
        }
    }

    return g; // Trả về ước số thực sự tìm được
}

int main() {
    // Ví dụ thử nghiệm bẻ gãy một hợp số lớn n = 8051 (bằng 83 * 97)
    long long n = 8051;

    cout << "Dang tim mot uoc cua " << n << "...\n";
    long long divisor = pollardRho(n);

    cout << "Tim thay mot uoc thuc su la: " << divisor << "\n";
    cout << "Kiem tra lai: " << n << " = " << divisor << " * " << n / divisor << "\n";

    return 0;
}

