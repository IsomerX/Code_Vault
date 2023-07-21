# about-brands3f99.css
# about3f99.css
# contact3f99.css
# fund-asset3f99.css
# global3f99.css
# landing3f99.css
# news3f99.css
# portfolio3f99.css
# press3f99.css
# services3f99.css
# vacancy3f99.css

import os

arr = os.listdir(r'C:\Users\dbaks\OneDrive\Desktop\desktop\work\acc\accent.ru\assets\javascripts')

for i in range(len(arr)):
    print(f"wp_enqueue_script('{arr[i][:-3]}', '/wp-content/uploads/assets/javascripts/{arr[i]}', false);")
    
    # <script src="/wp-content/uploads/assets/javascripts/{arr[i]}" ></script>')


function themeslug_enqueue_script() {
    wp_enqueue_script('about-brands3f99', '/wp-content/uploads/assets/javascripts/about-brands3f99.js', false);
    wp_enqueue_script('about3f99', '/wp-content/uploads/assets/javascripts/about3f99.js', false);
    wp_enqueue_script('blank3f99', '/wp-content/uploads/assets/javascripts/blank3f99.js', false);
    wp_enqueue_script('contact3f99', '/wp-content/uploads/assets/javascripts/contact3f99.js', false);
    wp_enqueue_script('fund-asset3f99', '/wp-content/uploads/assets/javascripts/fund-asset3f99.js', false);
    wp_enqueue_script('landing3f99', '/wp-content/uploads/assets/javascripts/landing3f99.js', false);
    wp_enqueue_script('news3f99', '/wp-content/uploads/assets/javascripts/news3f99.js', false);
    wp_enqueue_script('shared3f99', '/wp-content/uploads/assets/javascripts/shared3f99.js', false);
    wp_enqueue_script('vacancy3f99', '/wp-content/uploads/assets/javascripts/vacancy3f99.js', false);
}

add_action( 'wp_enqueue_scripts', 'themeslug_enqueue_script' );