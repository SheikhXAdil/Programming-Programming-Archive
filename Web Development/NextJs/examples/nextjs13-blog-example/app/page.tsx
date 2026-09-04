import styles from './page.module.css'
import Link from 'next/link'
import { posts } from "../data/posts"

type Post = {
  id: string,
  title: string,
  date: string
}

export default function Home() {
  return (
    <main className={styles.main}>
      <div className={styles.center}>
      <h1>Hello World</h1>
      </div>
      <div>
        {posts.map(({id, title, date}:Post) => {
          return (
            <>
            <Link href={`/posts/${id}`}>{title}</Link>
            <p>{date}</p>
            <br />
            </>
          )
        })}
      </div>
      <p><Link href={"/posts"}>Posts</Link></p>
    </main>
  )
}
