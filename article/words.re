= 同人誌的ReVIEW関連用語開発

主に筆者らによる偏見です。
#@# TODO あとで辞書順ソートしよう
#@# した

: Bundler
	「ばんどらー」と読む。
	プロジェクトで利用するRubyGemから拾ってくるライブラリのバージョンを指定して利用できる機能を持つ。
	@<chap>{troubles}の章で言及があるが、ReVIEWを使う時はgem版を使うかmaster/HEADを使うか、という話題がある。
	とりあえず、同じ本を書いている人の間では同じバージョンのReVIEW使ったほうがいいよね、ということでわかめが布教している。
	だがしかし、わかめ含めみんなRuby文化圏の人間ではないのでいまいち流行ってない。
	もういっその事、Rakefile中でBundlerのインストールまで勝手にやってしまうべきか… さすがにそれはみんなびっくりするかな…という葛藤が生じていると俺の中で話題沸騰中。
: CSS
	「しーえすえす」と読む。
	こいつがプログラマブルじゃないせいでどれだけの血と汗と涙が流れたのか。
	イマドキはSCSSとかLESSを使う（気がする）
: EmacsとかVimとか
	「いーまっくすとかびむとか」と読む。
	両方共UNIX系OSだと特に良く見る。
: EPUB
	「いーぱぶ」と読む。
	HTMLを雑にzipで固めた物体だと思っているけど雑なのはお前の理解だー！ふはははは。
: eRuby (erbファイル絡み)
	「いーるびぃ」と読む。embedded Rubyの略。拡張子は .erb。
	主にHTMLへRubyスクリプトを埋め込む技術。
	ReVIEWでもHTMLやEPUBの出力時に使う。
	Rubyスクリプトを埋め込む技術。
	Rubyスクリプトを埋め込む技術。
	繰り返す。「Ruby」スクリプトを埋め込む技術。
: format.rdoc
	「ふぉーまっとどっとあーるどっく」と読む。
	わかめのブラウザでは、アドレスバーに format と入力すると自動的に @<href>{https://github.com/kmuto/review/blob/master/doc/format.rdoc} が第一位にサジェストされる程度によく利用される。
: git
	「ぎっと」と読む。
	gitが使えないエンジニアは声が出せないに等しい。
	しかしエンジニアの外に出てデザイナさんに普及しようとしてもオシャレ波とアンチKUROIGAMEN勢力によってメゲメゲしてしまうのだ。かなしい。
: HTML
	「へてむる」と読まない。
	これについての解説がないな！と思ったけど、解説いらないだろこれ(投棄)。
: InDesign XML
	「いんでざいんえっくすえむえる」と読む。
	InDesignという、出版界ではデファクトスタンダートとして使われているAdobe社のDTPツールのための入力形式。
	しかし所詮はXMLだ。
: masterを使え！
	「ますたーをつかえ！」と読む。
	gem版にあるReVIEWを使うとハマる場合が多いのでGitHubのmasterを随時使うべき！という主張。
	広く使ってほしいツールのくせにgem版がおすすめできないとは何事だ！と主張するわかめとは相反するためたまに喧嘩になる。なかよくしろ。
	あめ玉は「そこまでReVIEWのリリースに期待はできないだろ」とこの本の趣旨を台無しにする発言を度々している。
: PDF
	「ぴーでぃーえふ」と読む。
	Adobe社が策定したフォーマットのくせに、至る所で使われ、版管理も難しいくせにECMAScriptの規格書もPDF版が正式だしこんなの絶対おかしいよ！
	全世界の仕様書がReVIEWで書かれるようになって簡単にgitでdiffが取れるようになーぁれ♪
	ISO 32000-1として規格化されているそうな。規格書開いてEffective Android（512P）より多かったのでそっ閉じ。
: pull request
	「ぷるりくえすと」と読む。
	主にGitHub上で行われる文通のようなもので、お手紙を書く代わりにコードを送りつける。
	バグの原因を説明して直してもらうよりバグ直したコード送りつけたほうが早い！という発想に基づく省力コミュニケーションの次世代形。
: Rakefile
	「れぃくふぁいる」と読む。
	MakefileのRuby版。
	わかめ（@<chap>{vvakame}の筆者）はRakefileはよくわからないのでGruntfile.jsのほうがいいよ！といってぶつくさいっている。
: review-preproc
	「れびゅーぷりぷろっく」と読む。
	外部コマンドを実行して、その出力を .re に埋め込む、みたいなことができる。
	@<chap>{commands}の執筆者である @amedama さんは、僕らのためにReVIEW原稿CIサーバを作ってくれています。
	で、原稿執筆の途中で review-preproc の存在を知って、「このコマンド使えるようにしたらCIサーバで何でも好きなコマンド実行できるじゃないですか！やだーー！！」と叫び始めて大変可哀想でした。
	でも、review-ext.rbもあるし、どのみち制限かけるのは無理だと思〜うよ☆ 新婚さんに慈悲はない！CIサーバ殺すべし！イヤーッ！
: Sublime Text 2
	「さぶらいむてきすとつー」と読む。
	EmacsとかVimとか怖くて使えないよ！
	という現代っ子のための、ReVIEW原稿ライティングツール。yanzm先生ありがとう！
: TeX
	「てふ」もしくは「てっく」と読む。
	TechBoosterでは割と「てふ」だがむとーしんは「てっく」だった気がする。
	純粋な@<code>{tex}コマンドを使ったことがあるものだけが、この項目を解説しなさい。
: TeX Live
	「てふらいぶ」と読む。
	TeXが関わる日本語書籍執筆なら今はこれ。
	ただしストレージを専有する領域も神レベル。
	具体的にいうと、Windows 95のインストールがフロッピー21枚だったらしいので、1.44MBとして計算するとMac用のTeX LiveであるMacTeXの配布容量は実に 76 Windows 95 に達する。GUIを備えたOperating System 76個分の容量って、一体何が入っているんだ。希望か、絶望か。
: YAML
	「やむる」と読む。
	プログラムの中のデータを保存したりプログラムに取り込んだりするのに便利。
	XMLのタグタグしたところに疲れ果てた人の一部の間でXMLの軽量化の機運が高まり、そこにPerlのシリアライズフォーマットが合体して生まれた謎の記法（後日JSONとも合体した）。
	ReVIEWでは書籍のファイル名や執筆者やらの情報を保存している。
	詳細は@<chap>{style_customize}を参照。
: この章一体何なんだ
	カオスって魅力だと思うんだ。
: コミックマーケット
	盆休みと年末を差す
: 宗教上の理由で使えない
	読んで字の如く、宗教上の理由で使えない場合に言い訳として用いる。
	あるプログラムやデータ構造をminifyしてワンライナー形式に変換できない仕組みや構造であるものには可能な限りかかわらずに生きていきたい。CoffeeScript！？Python！？YAML！？グワーッ！宗教上の理由でーッ！！
: 進捗どうですか？
	昨今の進捗聞かれっぷりは異常である。
	TechBooster界隈では、Unicode Emoji の HAPPY PERSON RAISING ONE HAND （U+1F64B）の絵文字が、とあるチャットクライアントで「＼進捗どうですかー？／」と聞いているポーズに見えることから、進捗さんと呼ばれて親しまれている。
	たった1文字で原稿が進んでいない相手を煽れるので非常に便利だが、スナック感覚で煽り合いに発展するので原稿を早めに勧めて相手より優位に立たねばならない。
: むとーしん
	@kmuto さんのこと。武藤神。
	なんで神と呼ばれているかは実はわかめはわかっていない。みんなは果たして知っているのだろうか。
	編集注釈：ムトゥ神が正しい。Debianメーリングリストにおいて初心者対応の丁寧さが神のごとくであると２ちゃんねる民の間で話題となったことが起源。
	なお某Androidの会メーリングリストで同じ現象が発生する可能性は高くないことをここに書き添えておく。
: 猫
	かわいい。
