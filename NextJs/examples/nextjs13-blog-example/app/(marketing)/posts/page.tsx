// "use client"

import styles from './page.module.css'
import Link from 'next/link'
// import { useRouter } from 'next/navigation';


export default function page() {
  // const router = useRouter();
  return (
    <main className={styles.main}>

      <div className={styles.center}>
        <h1>Hello Post</h1>
      </div>
        <p><Link href="/">Back to home</Link></p>
        {/* <button>Back to home</button> */}
    </main>
  )
}
