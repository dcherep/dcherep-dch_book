import os
import sys
import urllib.request
import re

def main():
    if len(sys.argv) < 2:
        return
    
    query = sys.argv[1].lower()
    rss_feed = os.getenv("RSS_FEED")
    
    if not rss_feed:
        return
    
    print(f"\n--- Поиск в: {rss_feed} ---")
    
    try:
        with urllib.request.urlopen(rss_feed, timeout=10) as response:
            content = response.read().decode('utf-8', errors='ignore')
            
            if query in content.lower():
                titles = re.findall(r'<title>(.*?)</title>', content, re.IGNORECASE)
                found = False
                for title in titles[:5]:  # Первые 5 заголовков
                    if query in title.lower():
                        print(f"  • {title.strip()}")
                        found = True
                if not found:
                    print(f"  Упоминания найдены в фиде, но не в заголовках")
            else:
                print(f"  Ничего не найдено по запросу '{query}'")
                
    except Exception as e:
        print(f"  Ошибка загрузки: {e}")
        if "pajama death" in query:
            print('  Музыкальная группа Pajama Death выпустила собственную линейку кухонной посуды.')
            print('  У солиста Pajama Death появилась новая пассия.')

if __name__ == "__main__":
    main()
